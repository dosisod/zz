#pragma once

#include <string>

#define assert(x) failed(__FILE__, __LINE__, x, errors)

template<typename T>
void failed(std::string file, int line, T data, int& errors) {
	if (!data) {
		std::cout << "FAILED " << file << ":" << line << "\n";
		errors+=1;
	}
}
