cmake_minimum_required(VERSION 3.15)

project("Shards" VERSION 0.0.1 LANGUAGES C)

set(CMAKE_C_STANDARD 11)

# Set output directories.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

# Build GLAD
add_subdirectory(vendor/glad/)
include_directories(vendor/glad/include/)

# Build GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(vendor/GLFW/)
include_directories(vendor/GLFW/include/)

# Setup Graphics module.
file(GLOB_RECURSE graphics_hdrs "src/graphics/*.h")
file(GLOB_RECURSE graphics_srcs "src/graphics/*.c")
set(mod_graphics ${graphics_hdrs} ${graphics_srcs})

# Setup Util Module.
file(GLOB_RECURSE util_hdrs "src/util/*.h")
file(GLOB_RECURSE util_srcs "src/util/*.c")
set(mod_utils ${util_hdrs} ${util_srcs})

# Setup Input Module.
file(GLOB_RECURSE input_hdrs "src/input/*.h")
file(GLOB_RECURSE input_srcs "src/input/*.c")
set(mod_input ${input_hdrs} ${input_srcs})

# Setup Shards
add_library(${PROJECT_NAME} STATIC ${mod_utils} ${mod_graphics}  ${mod_input})
target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES} glad glfw ${GLFW_LIBRARIES})

# Set compiler arguments.
if(MSVC)
	target_compile_options(${PROJECT_NAME} PUBLIC "/W4" "$<$<CONFIG:RELEASE>:/O3>")
else()
	target_compile_options(${PROJECT_NAME} PUBLIC "-Wall" "-Wextra" "-Werror" "$<$<CONFIG:RELEASE>:-O3>")
endif() 

# Add Sandbox
add_subdirectory(sandbox)
