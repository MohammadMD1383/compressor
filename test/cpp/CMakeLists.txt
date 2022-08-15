project(compressor-test)

add_executable(
	test
	main.cpp
)

target_include_directories(test PRIVATE ../../lib)

target_link_libraries(test libcompressor)
