cmake_minimum_required(VERSION 3.20)
project(Functions)

set(CMAKE_CXX_STANDARD 17)

#set(BOOST_ROOT "C:\\Boost") # either set it here or from the command line
#set(BOOST_ROOT "C:\\Program Files\\boost\\boost_1_77_0\\boost")
#set(BOOST_ROOT "C:\\Program Files\\boost\\boost_1_77_0")
set(BOOST_ROOT "C:\\Program Files\\boost")
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost) # header only libraries must not be added here

add_executable(Functions main.cpp consts.h FunctionImpl.cpp FunctionImpl.h PolynomialImpl.cpp PolynomialImpl.h Function.h SumImpl.h CompositionImpl.h Function.cpp Functions.h Functions.cpp ProductImpl.h SqrtPlusOneImpl.cpp SqrtPlusOneImpl.h)

target_include_directories(Functions PUBLIC ${Boost_INCLUDE_DIRS})
target_link_libraries(Functions ${Boost_LIBRARIES})
