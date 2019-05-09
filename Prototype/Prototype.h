//
// Created by felix on 19-5-2.
//

#ifndef PROTOTYPE_PROTOTYPE_H
#define PROTOTYPE_PROTOTYPE_H

#include <iostream>
using namespace std;


class Prototype {
public:
    virtual ~Prototype() {}
    virtual Prototype* Clone() const = 0;
protected:
    Prototype();
};

class ConcretePrototype : public Prototype {
public:
    ConcretePrototype() {
        cout << __func__ << endl;
    }
    ConcretePrototype(const ConcretePrototype& cp) {
        cout << __func__ << "copying..." << endl;
    };
    ~ConcretePrototype();
    Prototype* Clone() const {
        return new ConcretePrototype(*this);
    };
};

#endif //PROTOTYPE_PROTOTYPE_H
