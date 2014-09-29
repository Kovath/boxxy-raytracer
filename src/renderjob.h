#ifndef BOXXY_RENDER_JOB_H
#define BOXXY_RENDER_JOB_H

#include <list>
#include <string>
class RenderJobSetting;


class RenderJob {
private:
	std::list<RenderJobSetting> settings;
};




class RenderJobSetting {
public:
	
private:
	std::string component;
	std::string setting;
	std::list<std::string> parameters;
};

#endif