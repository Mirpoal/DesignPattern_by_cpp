cmake_minimum_required(VERSION 3.14)
project(Observe)

set(CMAKE_CXX_STANDARD 11)

add_executable(Observe main.cpp Observer.h Subject.h ConcreteSubject.h ConcreteObserver.h)