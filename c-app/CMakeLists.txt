cmake_minimum_required(VERSION 3.14)
project(calculator)

set(CMAKE_CXX_STANDARD 17)

# Библиотека с логикой
add_library(calc_lib calculator.cpp)

# Google Test — скачивается автоматически при сборке
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

# Исполняемый файл с тестами
add_executable(tests test_calculator.cpp)
target_link_libraries(tests calc_lib GTest::gtest_main)

# Регистрация тестов для ctest
enable_testing()
add_test(NAME CalcTests COMMAND tests)