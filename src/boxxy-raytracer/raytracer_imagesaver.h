#ifndef BOXXY_RAYTRACER_IMAGESAVER_H
#define BOXXY_RAYTRACER_IMAGESAVER_H

#include <string>
#include "renderedimage.h"

class BoxxyRayTracerImageSaver {
public:
	virtual ~BoxxyRayTracerImageSaver() {}

	virtual void saveImage(RenderedImage& image, std::string filename) {}
};

#endif