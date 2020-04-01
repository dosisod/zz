#include <iostream>

#include "route.hpp"
#include "router.hpp"
#include "zz.hpp"
#include "template.hpp"

int main() {
	int errors=0;

	errors+=testRoute();
	errors+=testRouter();
	errors+=testzz();
	errors+=testTemplate();

	if (errors == 1) {
		std::cout << "1 error occurred.\n";
	}
	else if (errors > 0) {
		std::cout << errors << " errors occurred.\n";
	}
	else {
		std::cout << "No errors occurred!\n";
		return 0;
	}
	return 1;
}
