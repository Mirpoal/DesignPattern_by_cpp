//
// Created by EShare on 2019/5/11.
//

#ifndef MEDIATOR_CONCRETEMEDIATOR_H
#define MEDIATOR_CONCRETEMEDIATOR_H

#include "IColleague.h"

// concreteMediator
class ConcreteMediator : public IMediator {
public:
    // implement the abstarct Mediator's distrubute method
    virtual void distrubuteMessage(const IColleague* sender, const string &message) const override {
        for (const IColleague* c : getColleagues()) {
            if (c == sender) {
                c->reveiveMessage(sender, message);
            }
        }
    }
};

#endif //MEDIATOR_CONCRETEMEDIATOR_H
