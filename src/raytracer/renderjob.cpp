#include "renderjob.h"
#include <sstream>

// RenderJobSetting
RenderJobSetting::RenderJobSetting(std::string component_name, std::string name, std::vector<std::string> parameters) {
	this->component_name = component_name;
	this->setting_name = name;
	this->parameters = parameters;
}

RenderJobSetting::RenderJobSetting(std::string line) {
	std::istringstream sin(line);
	sin >> component_name;
	sin >> setting_name;

	std::string parameter;
	while(sin.good()) {
		sin >> parameter;
		parameters.push_back(parameter);
	}
}

const std::string RenderJobSetting::get_component() {
	return component_name;
}

const std::string RenderJobSetting::get_name() {
	return setting_name;
}

const std::vector<std::string> RenderJobSetting::get_parameters() const {
	return parameters;
}





// RenderJob
const std::list<RenderJobSetting>& RenderJob::get_settings() const {
	return settings;
}