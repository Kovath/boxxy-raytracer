#ifndef BOXXY_SCENE_H
#define BOXXY_SCENE_H

#include <vector>
#include "sceneobject.h"
#include "scenelight.h"

class Scene {
public:
	Scene();

	void add_object(SceneObject obj);
	void add_light(SceneLight light);

	SceneObject& get_object(unsigned int id);
	SceneLight&  get_light(unsigned int id);

protected:
	std::vector<SceneLight> lights; 
	std::vector<SceneObject> objects;
};

#endif
