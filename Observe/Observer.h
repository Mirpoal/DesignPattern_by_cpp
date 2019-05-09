//
// Created by felix on 19-5-10.
//

#ifndef OBSERVE_OBSERVER_H
#define OBSERVE_OBSERVER_H

// 观察者
class Observer {
public:
    Observer() {}
    virtual ~Observer() {}
    virtual void doupdate(int state) = 0;
};


#endif //OBSERVE_OBSERVER_H
