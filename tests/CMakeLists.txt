cmake_minimum_required(VERSION 3.15)

add_executable(basic_test basic_test.c)
target_link_libraries(basic_test glfw)

enable_testing()
add_test(basic_test COMMAND basic_test)
