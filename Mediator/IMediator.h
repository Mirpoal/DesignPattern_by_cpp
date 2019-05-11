//
// Created by EShare on 2019/5/11.
//

#ifndef MEDIATOR_IMEDIATOR_H
#define MEDIATOR_IMEDIATOR_H

#include <list>
#include <string>
#include "IColleague.h"

using std::list;using std::string;

class IColleague;

// abstract Mediator
class IMediator {
public:
    // register colleagues
    virtual void registerColleague(IColleague* iColleague) {
        m_icolleagues.emplace_back(iColleague);
    }

    const list<IColleague*>& getColleagues() const {
        return m_icolleagues;
    }

    // send message to all registed colleagues
    virtual void distrubuteMessage(const IColleague* iColleague, const string &message) const = 0;

private:
    list<IColleague*> m_icolleagues;
};

#endif //MEDIATOR_IMEDIATOR_H
