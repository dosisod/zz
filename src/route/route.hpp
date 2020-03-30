#pragma once

#include <functional>
#include <string>

class Route {
public:
	Route(const std::string address, const std::function<std::string()> func);

	bool matches(const std::string address) const;
	void run() const;

private:
	const std::string address;
	const std::function<std::string()> func;
};
