#include <iostream>
#include <string>
#include "SimplyFactory.h"
using std::string;

class Client {
private:
    SimplyFactory* simplyFactory;
    Api* clientApi;

public:
    Client(){}
    ~Client(){}

    // 面向接口的编程，对象的类型应该申明成接口或者抽象类的类型，而不是具体的实现类类型，以支持未来的变化。
    Api* ClientCreateApi(SimplyFactory* simplyFactory) {
        this->simplyFactory = simplyFactory;
        clientApi = this->simplyFactory->CreateApi();
    }

    void ClientUseApiMethod(string &str) {
        clientApi->ApiMethod(str);
    }
};

int main() {

    string strA("ApiA's Method");
    string strB("ApiB's Method");

    // Client 端创建 Api 的方法和参数是相同的
    Client* client = new Client();
    client->ClientCreateApi(new ImplAFactory);
    client->ClientUseApiMethod(strA);

    client->ClientCreateApi(new ImplBFactory);
    client->ClientUseApiMethod(strB);

    delete client;

    return 0;
}