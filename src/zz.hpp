#pragma once

#include <string>

#include "route/router.hpp"

class zz : public Router {
public:
	zz(const std::string address, const unsigned int port);

	void run() const;

private:
	const std::string address;
	const unsigned int port;
};
