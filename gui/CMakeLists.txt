project(compressor-gui)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(
	compressor-gui
	main.cpp
)

target_include_directories(compressor-gui PRIVATE ../lib)

target_link_libraries(
	compressor-gui
	libcompressor
	Qt6::Widgets
)

set_target_properties(
	compressor-gui PROPERTIES
	WIN32_EXECUTABLE ON
	MACOSX_BUNDLE ON
)
