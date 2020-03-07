#include <iostream>

#include "zz.hpp"

zz::zz(std::string const address, unsigned int const port) :
	address(address),
	port(port)
	{}

void zz::run() const {
	std::cout << "zz -> " << address << ":" << port << "\n";
}
