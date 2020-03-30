#include "../src/route/route.hpp"

#include "assert.hpp"

int testRoute() {
	int errors=0;

{
	//test route matching
	auto r=Route("/", []{ return ""; });

	assert(r.matches("/"));
	assert(! r.matches("/not-slash"));
}

{
	//test route running
	auto r=Route("/", []{ return "hello!"; });

	assert(r.run() == "hello!");
}

	return errors;
}
