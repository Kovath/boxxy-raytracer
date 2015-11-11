#ifndef BOXXY_RAYTRACER_ENGINE_H
#define BOXXY_RAYTRACER_ENGINE_H

#include "scene/scene.h"
#include "renderedimage.h"

class BoxxyRayTracerEngine {
public:
	virtual RenderedImage render(Scene& scene);
};

#endif