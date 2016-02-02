#ifndef BOXXY_RENDER_JOB_H
#define BOXXY_RENDER_JOB_H

#include <list>
#include <string>
#include <vector>

class RenderJobSetting {
public:
	RenderJobSetting(std::string component_name, std::string name, std::vector<std::string> parameters);
	RenderJobSetting(std::string line);

	const std::string get_component();
	const std::string get_name();
	const std::vector<std::string> get_parameters() const;

private:
	std::string component_name;
	std::string setting_name;
	std::vector<std::string> parameters;
};



class RenderJob {
public:
	const std::list<RenderJobSetting>& get_settings() const;

private:
	std::list<RenderJobSetting> settings;
};

#endif
