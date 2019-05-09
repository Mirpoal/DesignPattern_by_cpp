#include <iostream>
#include "AbstractFactory.h"

class Client {
private:
    AbstractFactory* abstractFactory;

public:
    Client() {}
    ~Client() {}
    // 创建一系列具有相会依赖关系的对象
    void CreateFactory(AbstractFactory* abstractFactory) {
        this->abstractFactory = abstractFactory;
    }

    // 使用一系列组合对象的方法
    void ClientUseProductMethod(string& str) {
        cout << "follow line is combianation" << endl;
        this->abstractFactory->CreateProductA()->AbstractProductAMethod(str);
        this->abstractFactory->CreateProductB()->AbstractProductBMethod(str);
        cout << "================" << endl;
    }
};

int main() {

    Client* client = new Client();
    ConcreteFactoryA* concreteFactoryA = new ConcreteFactoryA();
    ConcreteFactoryB* concreteFactoryB = new ConcreteFactoryB();

    client->CreateFactory(concreteFactoryA);
    string str1(" felix");
    client->ClientUseProductMethod(str1);

    client->CreateFactory(concreteFactoryB);
    string str2(" fei");
    client->ClientUseProductMethod(str2);

    delete client;
    delete concreteFactoryA;
    delete concreteFactoryB;

    return 0;
}