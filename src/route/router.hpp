#pragma once

#include <functional>
#include <vector>
#include <string>

#include "route.hpp"

class Router {
public:
	Router() {}

	void route(std::string const address, std::function<std::string()> const func);

	void execute(std::string const address) const;

private:
	std::vector<Route> routes;
};
