# CMakeList.txt : CMake project for NyxisEngine, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (NyxisEngine "NyxisEngine.cpp" "NyxisEngine.h" "Window.cpp" "Window.hpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET NyxisEngine PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

add_subdirectory(deps/glfw-3.4)

find_package(Vulkan REQUIRED)

target_include_directories(NyxisEngine PRIVATE 

	${CMAKE_CURRENT_SOURCE_DIR}
	${CMAKE_SOURCE_DIR}/deps/glfw-3.4/include

)

target_link_libraries(NyxisEngine

	PRIVATE
	glfw
	Vulkan::Vulkan

)
