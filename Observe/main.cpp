#include <iostream>
#include "ConcreteObserver.h"
#include "ConcreteSubject.h"

int main() {
    Subject* subject = new ConcreteSubject("Subject");
    Observer* observer1 = new ConcreteObserve("Observe1");
    Observer* observer2 = new ConcreteObserve("Observe2");
    subject->attach(observer1);
    subject->attach(observer2);

    // change state and notify
    subject->setstate(1);
    subject->notify();

    // notify again
    subject->setstate(2);
    subject->notify();

    // observer1 unsubscribe
    subject->detach(observer1);

    // notify again
    subject->setstate(3);
    subject->notify();

    delete subject;
    delete observer1;
    delete observer2;

    return 0;
}