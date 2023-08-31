#Mininum version required to run this Project
cmake_minimum_required(VERSION 3.27)

#Project Name
project(MyCalc)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Creating test executable
add_executable(outcalctest1 ./test/test_calc1.cpp)
add_executable(outcalctest2 ./test/test_calc2.cpp)
add_executable(outcalctest3 ./test/test_calc3.cpp)

# Enable CTest
enable_testing()

# Add a test
add_test(NAME Test1 COMMAND outcalctest1)
add_test(NAME Test2 COMMAND outcalctest2)
add_test(NAME Test3 COMMAND outcalctest3)
