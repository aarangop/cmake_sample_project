add_subdirectory(A)
add_subdirectory(B)
add_subdirectory(C)

add_executable(sample_cmake_program ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_link_libraries(sample_cmake_program PRIVATE libC libB libA)