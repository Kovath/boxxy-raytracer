#ifndef BOXXY_SCENELIGHT_H
#define BOXXY_SCENELIGHT_H

#include "../color.h"
#include "sceneelement.h"

class SceneLight: public SceneElement {
public:
	virtual Color get_color() = 0;
	virtual void get_intensity() = 0;
};

#endif
