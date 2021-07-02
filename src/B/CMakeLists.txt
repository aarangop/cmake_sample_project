add_library(libB-obj OBJECT "")

target_sources(libB-obj 
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/libB.cpp
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/libB.h
)

add_library(libB STATIC $<TARGET_OBJECTS:libA-obj>)

target_link_libraries(libB PRIVATE libA)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})