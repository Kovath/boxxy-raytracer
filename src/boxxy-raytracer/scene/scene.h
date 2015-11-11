#ifndef BOXXY_SCENE_H
#define BOXXY_SCENE_H

#include <vector>
#include "sceneelement.h"

class Scene {
public:
	Scene();

	void add_element(SceneElement& element);
	SceneElement& get_element(unsigned int id);
	SceneElement& get_elements();

protected:
	std::vector<SceneElement> elements; 
};

#endif
