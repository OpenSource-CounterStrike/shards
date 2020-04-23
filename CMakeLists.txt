cmake_minimum_required(VERSION 3.15)

project("Shards" VERSION 0.0.1 LANGUAGES C)

set(CMAKE_C_STANDARD 99)

# Set output directories.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

# Set compiler arguments.
if(MSVC)
    add_compile_options("/W4" "$<$<CONFIG:RELEASE>:/O3>")
else()
	add_compile_options("-Wall" "-Wextra" "-Werror" "$<$<CONFIG:RELEASE>:-O3>")
endif()

# Find OpenGL
find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS})

# Find GLFW
find_package(glfw3 REQUIRED)

# Add GLAD
add_subdirectory(vendor/glad/)

# Setup Graphics module.
file(GLOB_RECURSE graphics_hdrs "src/graphics/*.h")
file(GLOB_RECURSE graphics_srcs "src/graphics/*.c")
set(mod_graphics ${graphics_hdrs} ${graphics_srcs})

# Setup Shards
add_library(${PROJECT_NAME} ${mod_graphics})
target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES} glad ${GLFW_STATIC_LIBRARIES})

# Setup tests
enable_testing()
add_subdirectory(tests)
