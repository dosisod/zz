#include "router.hpp"
#include "route.hpp"

void Router::route(const std::string address, const std::function<std::string(void)> func) {
	routes.emplace_back(address, func);
}

std::string Router::execute(const std::string address) const {
	for (const auto& route : routes)
		if (route.matches(address))
			return route.run();

	return "<pre>Error 404: \"" + address + "\" not found.</pre>";
}
