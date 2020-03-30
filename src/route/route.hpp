#pragma once

#include <functional>
#include <string>

class Route {
public:
	Route(const std::string address, const std::function<std::string(void)> func);

	bool matches(const std::string address) const;
	std::string run() const;

private:
	const std::string address;
	const std::function<std::string(void)> func;
};
