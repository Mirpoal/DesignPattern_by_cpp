#include <iostream>
#include "Prototype.h"

int main() {
    Prototype* pt = new ConcretePrototype();

    Prototype* pt1 = pt->Clone();
    delete pt1;

    return 0;
}