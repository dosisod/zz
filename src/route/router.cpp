#include "router.hpp"
#include "route.hpp"

void Router::route(const std::string address, const std::function<std::string()> func) {
	routes.emplace_back(address, func);
}

void Router::execute(const std::string address) const {
	for (const auto& route : routes)
		if (route.matches(address))
			route.run();
}
