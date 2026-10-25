cmake_minimum_required(VERSION 3.16)
project(code_of_honor_xbox360_port LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(coh_core src/core.cpp)
target_include_directories(coh_core PUBLIC include)

add_executable(coh_port src/main.cpp)
target_link_libraries(coh_port PRIVATE coh_core)

enable_testing()
add_executable(coh_smoke_test tests/smoke_test.cpp)
target_link_libraries(coh_smoke_test PRIVATE coh_core)
add_test(NAME coh_smoke_test COMMAND coh_smoke_test)

add_executable(coh_platform_interfaces_test tests/platform_interfaces_compile.cpp)
target_include_directories(coh_platform_interfaces_test PRIVATE include)
add_test(NAME coh_platform_interfaces_test COMMAND coh_platform_interfaces_test)
