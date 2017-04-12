cmake_minimum_required(VERSION 3.7)
project(catch)

set(CMAKE_CXX_STANDARD 11)
set(COMMON_INCLUDES  ${PROJECT_SOURCE_DIR}/include)


file(GLOB TEST_SOURCES ${PROJECT_SOURCE_DIR}/tests/*.cpp)

include_directories(${COMMON_INCLUDES})

enable_testing()

foreach( testsourcefile ${TEST_SOURCES} )
    get_filename_component(testname ${testsourcefile} NAME)
    MESSAGE( STATUS "test file: " ${testname} )
    string( REPLACE ".cpp" "" test ${testname} )
    add_executable( ${test} ${testsourcefile} )
    add_test(NAME ${test} COMMAND ${test})
endforeach( testsourcefile ${TEST_SOURCES} )

