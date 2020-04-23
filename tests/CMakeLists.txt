cmake_minimum_required(VERSION 3.15)

add_executable(basic_test basic_test.c)
target_link_libraries(basic_test glfw ${OPENGL_LIBRARIES} glad glfw ${GLFW_LIBRARIES})

enable_testing()
add_test(NAME basic_test COMMAND ${CMAKE_SOURCE_DIR}/bin/basic_test)
