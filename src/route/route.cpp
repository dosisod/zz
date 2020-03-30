#include "route.hpp"

Route::Route(const std::string address, const std::function<std::string(void)> func) :
	address(address),
	func(func)
	{}

bool Route::matches(const std::string address) const {
	return this->address==address;
}

std::string Route::run() const {
	return func();
}
