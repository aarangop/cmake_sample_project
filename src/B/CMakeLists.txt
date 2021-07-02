add_library(libB-obj OBJECT "")

target_sources(libB-obj 
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/libB.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/libB.h
)

add_library(libB STATIC $<TARGET_OBJECTS:libB-obj>)

target_link_libraries(libB-obj PRIVATE libA)

target_include_directories(libB PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})