project(compressor-cli)

add_executable(
	compressor
	main.cpp
)

target_include_directories(compressor PRIVATE ../lib)

target_link_libraries(compressor libcompressor)
