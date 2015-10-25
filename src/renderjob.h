#ifndef BOXXY_RENDER_JOB_H
#define BOXXY_RENDER_JOB_H

#include <list>
#include <string>





class RenderJobSetting;
class RenderJobComponent;


class RenderJob {
public:
	RenderJobSetting get_setting(std::string setting_name);

};




class RenderJobSetting {
public:
	std::string name;
	std::string value;
	std::list<std::string> parameters;
};


class RenderJobComponent {

};

#endif
