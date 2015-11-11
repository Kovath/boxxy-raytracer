#ifndef BOXXY_RAYTRACER_PARSER_H
#define BOXXY_RAYTRACER_PARSER_H

#include <istream>
#include <raytracer/renderjob.h>

class BoxxyRayTracerParser {
public:
	virtual ~BoxxyRayTracerParser() {}

	// abstract to parsing any stream
	virtual RenderJob* parse(std::istream& stream);
};

#endif