#include "router.hpp"
#include "route.hpp"

void Router::route(std::string const address, std::function<std::string()> const func) {
	routes.emplace_back(address, func);
}

void Router::execute(std::string const address) const {
	for (const auto& route : routes)
		if (route.matches(address))
			route.run();
}
