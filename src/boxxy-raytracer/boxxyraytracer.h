#ifndef BOXXY_BOXXYRAYTRACER_H
#define BOXXY_BOXXYRAYTRACER_H

#include <string>
#include <istream>
#include <raytracer/raytracer.h>
#include <raytracer/renderjob.h>


class BoxxyRayTracer: public RayTracer {
public:
	BoxxyRayTracer();
	~BoxxyRayTracer();

	// main render function
	void render(RenderJob& job);

	// utility render functions, will reroute to main render
	void render(std::string filename);
	void render(std::istream stream);

private:
};

#endif