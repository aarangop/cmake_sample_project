add_library(libA-obj OBJECT "")

target_sources(libA-obj 
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/libA.cpp
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/public/libA.h
)

add_library(libA STATIC $<TARGET_OBJECTS:libA-obj>)

target_include_directories(libA PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/public)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/public)