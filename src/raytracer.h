#ifndef BOXXY_RAYTRACER
#define BOXXY_RAYTRACER

#include "renderjob.h"

class RayTracer {
public:
	virtual void configure() = 0;
	virtual void render(RenderJob& job) = 0;
};

#endif
