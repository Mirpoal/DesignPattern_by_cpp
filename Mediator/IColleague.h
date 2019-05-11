//
// Created by EShare on 2019/5/11.
//

#ifndef MEDIATOR_ICOLLEAGUE_H
#define MEDIATOR_ICOLLEAGUE_H

#include "IMediator.h"
#include <string>
using std::string;

class IMediator;

class IColleague {
public:
    IColleague(const string& name) : m_strName(name) {}
    string getName() const {
        return m_strName;
    }
    virtual void sendMessage(const IMediator& mediator, const string& message) = 0;
    virtual void reveiveMessage(const IColleague* sender, const string& message) const = 0;

private:
    string m_strName;
};


#endif //MEDIATOR_ICOLLEAGUE_H
