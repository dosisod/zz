#pragma once

#include <functional>
#include <string>

class Route {
public:
	Route(std::string const address, std::function<std::string()> const func);

	bool matches(std::string address) const;
	void run() const;

private:
	const std::string address;
	const std::function<std::string()> func;
};
