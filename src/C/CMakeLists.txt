
add_library(libC-obj OBJECT libC.h libC.cpp)

target_link_libraries(libC-obj PRIVATE libB libA)

add_library(libC $<TARGET_OBJECTS:libC-obj>)

target_include_directories(libC PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})