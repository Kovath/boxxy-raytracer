#include "boxxyraytracer.h"
#include <iostream>
#include <fstream>
#include "raytracer_parser.h"
#include "raytracer_scenegenerator.h"
#include "raytracer_engine.h"
#include "raytracer_imagesaver.h"

BoxxyRayTracer::BoxxyRayTracer() {

}

BoxxyRayTracer::~BoxxyRayTracer() {
	// iono lol
}

// stream -> [Parser] -> RenderJob -> render(RenderJob)
void BoxxyRayTracer::render(std::string filename) {
	std::ifstream render_file;

	// open the file stream, perform the render, then close the file stream
	render_file.open(filename, std::ios::in);
	render(render_file);
	render_file.close();
}

void BoxxyRayTracer::render(std::istream& stream) {
	// create abstract parser, then perform render
	// NOTE: DOES NOT CLOSE THE STREAM

	BoxxyRayTracerParser* parser = new BoxxyRayTracerParser();
	render(*(parser->parse(stream)));
	delete parser;
}


// THE GREAT PIPELINE
// RenderJob -> [SceneGenerator] -> Scene -> [RenderEngine] -> RenderedImage -> [ImageSaver]
void BoxxyRayTracer::render(RenderJob& job) {
	// Build a scene object for the engine
	BoxxyRayTracerSceneGenerator* sceneGenerator = new BoxxyRayTracerSceneGenerator();
	Scene* scene = sceneGenerator->generateScene(job);
	delete sceneGenerator;

	// Perform the heavyweight rendering
	BoxxyRayTracerEngine* engine = new BoxxyRayTracerEngine();
	RenderedImage* image = engine->render(*scene);
	delete scene;
	delete engine;

	// Take the rendered image and save it to a file
	BoxxyRayTracerImageSaver* imageSaver = new BoxxyRayTracerImageSaver();
	imageSaver->saveImage(*image, "");
	delete image;
	delete imageSaver;
}