//
// Created by felix on 19-5-10.
//

#ifndef OBSERVE_CONCRETEOBSERVER_H
#define OBSERVE_CONCRETEOBSERVER_H

#include <string>
#include <iostream>
#include "Observer.h"
using std::string;using std::cout;using std::endl;

class ConcreteObserve : public Observer {
public:
    ConcreteObserve(string name) {
        obj_name = name;
    }
    virtual ~ConcreteObserve() {}

    virtual void doupdate(int state) {
        m_observerState = state;
        cout << "update " << obj_name << "'s m_observerState : " << m_observerState << endl;
    }

private:
    int m_observerState;
    string obj_name;
};

#endif //OBSERVE_CONCRETEOBSERVER_H
