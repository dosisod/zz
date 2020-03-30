#include "../src/zz.hpp"

#include "assert.hpp"

int testzz() {
	int errors=0;

	//test app creation
	auto app=zz("localhost", 5000);

	//test app can be ran
	const int status=app.run();

	//assert app ran w/o errors
	assert(status == 0);

	return errors;
}
