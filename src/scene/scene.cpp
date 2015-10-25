#include "scene.h"


SceneObject& Scene::get_object(unsigned int id) {
	return objects[id];
}

SceneLight& Scene::get_light(unsigned int id) {
	return lights[id];
}
