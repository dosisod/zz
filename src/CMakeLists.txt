add_executable(main main.cpp)

add_library(zz zz.hpp zz.cpp)
add_library(route route/route.hpp route/route.cpp)
add_library(router route/router.hpp route/router.cpp)
add_library(template template.hpp template.cpp)

target_link_libraries(
	main
	router
	route
	zz
	template
)
