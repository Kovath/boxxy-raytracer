#ifndef BOXXY_SCENEELEMENT_H
#define BOXXY_SCENEELEMENT_H

#include <raytracer/ray.h>

class SceneElement {
public:
	// calculates if a ray can hit the element and at what point in time
	virtual float ray_hit(Ray ray) { return false; }

	// occupies space in the scene
	virtual bool is_object() { return false; }
	// emits light in the scene
	virtual bool is_light() { return false; }
};

#endif
