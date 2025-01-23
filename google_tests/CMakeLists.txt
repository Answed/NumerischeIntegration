project(Google_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_executable(NummerischeIntegration_Test shunting_yard_test.cpp)

target_link_libraries(NummerischeIntegration_Test source)
target_link_libraries(NummerischeIntegration_Test gtest gtest_main)
