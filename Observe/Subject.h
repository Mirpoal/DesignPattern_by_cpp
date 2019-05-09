//
// Created by felix on 19-5-10.
//

#ifndef OBSERVE_SUBJECT_H
#define OBSERVE_SUBJECT_H

#include <vector>
using std::vector;

#include "Observer.h"

// 目标类,发布者
class Subject {
public:
    Subject() {}
    virtual ~Subject() {}
    // 订阅方法
    void attach(Observer* observer) {
        vector_observer.push_back(observer);
    }
    // 取消方法
    void detach(Observer* observer) {
        for (vector<Observer*>::iterator itr = vector_observer.begin(); itr != vector_observer.end(); itr++) {
            if (*itr == observer)
                vector_observer.erase(itr);
        }
    }
    // 通知方法
    void notify() {
        for (vector<Observer*>::iterator itr= vector_observer.begin(); itr != vector_observer.end() ; itr++) {
            (*itr)->doupdate(notify_state);
        }
    }

    virtual int getstate() = 0;
    virtual void setstate(int state) = 0;

protected:
    int notify_state;

private:
    vector<Observer*> vector_observer;
};

#endif //OBSERVE_SUBJECT_H
