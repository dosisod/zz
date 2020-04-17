#include <fstream>
#include <sstream>
#include <utility>
#include <regex>

#include "template.hpp"

Template::Template(const std::string filename) :
	filename(filename)
	{}

std::string Template::render(const std::pair<std::string, std::any> data) const {
	std::ifstream filestream(filename);
	std::stringstream buffer;
	buffer << filestream.rdbuf();

	if (buffer.good()) {
		std::string html=buffer.str();
		html=regex_replace(
			html,
			std::regex("\\{\\{ " + data.first + " \\}\\}"),
			parseAny(data.second)
		);

		return html;
	}

	return "<pre>Could not find template \"" + filename + "\"</pre>";
}

std::string Template::render() const {
	std::ifstream filestream(filename);
	std::stringstream buffer;
	buffer << filestream.rdbuf();

	if (buffer.good())
		return buffer.str();

	return "<pre>Could not find template \"" + filename + "\"</pre>";
}

std::string Template::parseAny(std::any data) const {
	try {
		return std::any_cast<std::string>(data);
	} catch(...) {}
	try {
		return std::any_cast<const char*>(data);
	} catch(...) {}
	try {
		return std::to_string(std::any_cast<int>(data));
	} catch(...) {}
	try {
		return std::to_string(std::any_cast<double>(data));
	} catch(...) {}
	try {
		return std::to_string(std::any_cast<float>(data));
	} catch(...) {}
	try {
		return std::to_string(std::any_cast<bool>(data));
	} catch(...) {
		return "";
	}
}
