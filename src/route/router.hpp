#pragma once

#include <functional>
#include <vector>
#include <string>

#include "route.hpp"

class Router {
public:
	Router() {}

	void route(const std::string address, const std::function<std::string(void)> func);

	void execute(const std::string address) const;

private:
	std::vector<Route> routes;
};
