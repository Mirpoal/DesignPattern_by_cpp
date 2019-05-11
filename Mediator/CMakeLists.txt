cmake_minimum_required(VERSION 3.12)
project(Mediator)

set(CMAKE_CXX_STANDARD 11)

add_executable(Mediator main.cpp IMediator.h IColleague.h ConcreteMediator.h ConcreteColleagueA.h)