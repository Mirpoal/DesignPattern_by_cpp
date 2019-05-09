//
// Created by felix on 19-5-10.
//

#ifndef OBSERVE_CONCRETESUBJECT_H
#define OBSERVE_CONCRETESUBJECT_H

#include <string>
#include <iostream>
#include "Subject.h"
using std::string;using std::cout;using std::endl;

class ConcreteSubject : public Subject {
public:
    ConcreteSubject(string name) {
        sub_name = name;
    }
    virtual ~ConcreteSubject() {}
    virtual void setstate(int state) {
        notify_state = state;
    }

    virtual int getstate() {
        return notify_state;
    }

private:
    string sub_name;
};

#endif //OBSERVE_CONCRETESUBJECT_H
