#include "../src/zz.hpp"

#include "assert.hpp"

int testzz() {
	int errors=0;

	//test app creation
	auto app=zz("localhost", 5000);

	//test app can be ran
	app.run();

	return errors;
}
