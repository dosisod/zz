#include <string>

#include "route/router.hpp"

class zz : public Router {
public:
	zz(std::string const address, unsigned int const port);

	void run() const;

private:
	const unsigned int port;
	const std::string address;
};
