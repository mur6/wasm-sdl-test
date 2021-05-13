cmake_minimum_required(VERSION 3.10.2)

project(wasm_sdk_test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g --bind -s DEMANGLE_SUPPORT=1 -s ALLOW_MEMORY_GROWTH=1 -s USE_SDL=2 -s USE_SDL_IMAGE=2 --embed-file zozo_shoe_data_0000.bin")

add_executable(main main.cpp)
