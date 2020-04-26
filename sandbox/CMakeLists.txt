cmake_minimum_required(VERSION 3.15)

file(GLOB_RECURSE sandbox_hdrs "*.h")
file(GLOB_RECURSE sandbox_srcs "*.c")

include_directories("../src/")
add_executable(sandbox ${sandbox_hdrs} ${sandbox_srcs})
target_link_libraries(sandbox Shards ${OPENGL_LIBRARIES} glad glfw ${GLFW_LIBRARIES})
