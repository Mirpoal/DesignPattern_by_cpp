//
// Created by EShare on 2019/5/11.
//

#ifndef MEDIATOR_CONCRETECOLLEAGUEA_H
#define MEDIATOR_CONCRETECOLLEAGUEA_H

#include "IColleague.h"
#include <iostream>
#include <string>

using std::string;using std::cout;using std::endl;

class ConcreteColleague : public IColleague {
public:

    ConcreteColleague(const string &name) : IColleague(name) {}

    void sendMessage(const IMediator &mediator, const string& message) override {
        cout << getName() << " send " << message << " message " << endl;
        mediator.distrubuteMessage(this, message);
    }

    void reveiveMessage(const IColleague *sender, const string &message) const override {
        cout << getName() << " receive the message from " << sender->getName() << " : " << message << endl;
    }
};

#endif //MEDIATOR_CONCRETECOLLEAGUEA_H
