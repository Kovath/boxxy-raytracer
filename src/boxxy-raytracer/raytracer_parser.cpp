#include "raytracer_parser.h"
#include <iostream>

RenderJob* BoxxyRayTracerParser::parse(std::istream& stream) {
	std::cout << "PARSING" << std::endl;

	return new RenderJob();
}