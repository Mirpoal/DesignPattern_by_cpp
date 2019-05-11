#include <iostream>
#include "IColleague.h"
#include "ConcreteMediator.h"
#include "ConcreteColleagueA.h"
#include "IMediator.h"

int main() {

    IColleague* colleagueA = new ConcreteColleague("同事A");
    IColleague* colleagueB = new ConcreteColleague("同事B");
    IColleague* colleagueC = new ConcreteColleague("同事C");
    IColleague* colleagueD = new ConcreteColleague("同事D");

    // mediator
    ConcreteMediator concreteMediator;

    concreteMediator.registerColleague(colleagueA);
    concreteMediator.registerColleague(colleagueB);
    concreteMediator.registerColleague(colleagueC);

    colleagueA->sendMessage(concreteMediator, "send message");

    delete colleagueA;
    delete colleagueB;
    delete colleagueC;
    delete colleagueD;

    return 0;
}