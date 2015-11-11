#ifndef BOXXY_BOXXYRAYTRACER_H
#define BOXXY_BOXXYRAYTRACER_H

#include <raytracer/raytracer.h>
#include <raytracer/renderjob.h>

class BoxxyRayTracer: public RayTracer {
public:
	BoxxyRayTracer();
	~BoxxyRayTracer();

	void render(RenderJob& job);
	
private:
	/*Scene*/ void generateScene();
};

#endif