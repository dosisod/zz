#include "../src/template.hpp"

#include "assert.hpp"
#include <iostream>

int testTemplate() {
	int errors=0;

{
	//test template render()
	auto t=Template("../test/data/hello-world.html");
	assert(t.render() == "<p>Hello World!</p>\n");
}

{
	//test invalid template render
	auto t=Template("invalid-path.html");
	assert(t.render() == "<pre>Could not find template \"invalid-path.html\"</pre>");
}

{
	//create template class for testing parseAny()
	class TemplateTesting : public Template {
	public:
		TemplateTesting() : Template("") {}
		using Template::parseAny;
	} t;

	std::any i=123;
	std::any d=123.456;
	std::any f=123.456f;
	std::any c="hello";
	std::string str="hello";
	std::any s=str;

	assert(t.parseAny(i) == "123");
	assert(t.parseAny(d) == "123.456000");
	assert(t.parseAny(f) == "123.456001");
	assert(t.parseAny(c) == "hello");
	assert(t.parseAny(s) == "hello");
}

{
	//test template parameter replacement
	auto t=Template("../test/data/one-param.html");
	assert(t.render({"param", "testing"}) == "<p>testing</p>\n");
}

	return errors;
}
