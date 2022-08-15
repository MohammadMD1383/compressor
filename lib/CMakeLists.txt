project(compressor-lib)

set(CMAKE_SHARED_LIBRARY_PREFIX "")

add_library(
	libcompressor SHARED
	root.cpp
)

target_link_libraries(libcompressor PUBLIC gmp gmpxx)
