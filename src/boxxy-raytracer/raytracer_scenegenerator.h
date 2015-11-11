#ifndef BOXXY_RAYTRACER_SCENE_GENERATOR_H
#define BOXXY_RAYTRACER_SCENE_GENERATOR_H

#include <raytracer/renderjob.h>
#include "scene/scene.h"

class BoxxyRayTracerSceneGenerator {
public:
	virtual ~BoxxyRayTracerSceneGenerator() {}

	// abstract to parsing any stream
	virtual Scene* generateScene(RenderJob& job) { return new Scene(); }
};

#endif