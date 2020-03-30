#include "../src/route/router.hpp"

#include "assert.hpp"

int testRouter() {
	int errors=0;

{
	//rest route adding method
	auto r=Router();

	r.route("/route1", []{ return "hello 1!"; } );
	r.route("/route2", []{ return "hello 2!"; } );
}

{
	//test router running
	auto r=Router();

	r.route("/", []{ return "hello from index!"; } );
	auto ret=r.execute("/");

	assert( ret == "hello from index!" );
}

{
	//test non-existent route handling
	auto r=Router();

	auto ret=r.execute("/not-a-route");

	assert(ret == "<pre>Error 404: \"/not-a-route\" not found.</pre>" );
}

{
	//test router function actually adds
	auto r=Router();

	int i=0;

	r.route("/add", [&i] {
		i++;
		return "adding 1!";
	});

	r.execute("/add");
	assert(i == 1);
}

	return errors;
}
