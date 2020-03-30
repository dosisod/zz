#include <iostream>

#include "zz.hpp"

zz::zz(const std::string address, const unsigned int port) :
	address(address),
	port(port)
	{}

int zz::run() const {
	std::cout << "zz -> " << address << ":" << port << "\n";

	return 0;
}
