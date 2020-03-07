#include "route.hpp"

Route::Route(std::string const address, std::function<std::string()> const func) :
	address(address),
	func(func)
	{}

bool Route::matches(std::string const address) const {
	return this->address==address;
}

void Route::run() const {
	func();
}
