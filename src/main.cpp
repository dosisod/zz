#include "zz.hpp"

int main() {
	auto app=zz("localhost", 5000);

	app.route("/", [=]{
		return "hi";
	});

	app.run();

	return 0;
}