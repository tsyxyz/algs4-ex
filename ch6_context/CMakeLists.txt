get_filename_component(CURRENT_DIR ${CMAKE_CURRENT_SOURCE_DIR} NAME)

file(GLOB SOURCES src/*.cpp)
if(SOURCES)
    add_library(${CURRENT_DIR} SHARED ${SOURCES})
endif(SOURCES)

file(GLOB TESTS test/*.cpp)
foreach(TEST ${TESTS})
    get_filename_component(EXECUTABLE ${TEST} NAME_WE)
    add_executable(${EXECUTABLE} ${TEST})
    target_link_libraries(${EXECUTABLE} ${CURRENT_DIR} ${GTEST_BOTH_LIBRARIES} pthread)
endforeach(TEST ${TESTS})
