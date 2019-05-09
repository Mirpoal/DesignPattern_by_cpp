//
// Created by felix on 19-5-1.
//

#ifndef SIMPLEFACTORY_SIMPLYFACTORY_H
#define SIMPLEFACTORY_SIMPLYFACTORY_H

#include <string>
#include <iostream>

using namespace std;

// 抽象基类
class Api {
public:
    Api() {}
    virtual void ApiMethod(string & str) = 0;
    virtual ~Api() {}
};

// 工厂抽象基类
class SimplyFactory {
public:
    SimplyFactory() {}
    ~SimplyFactory(){};
    virtual Api* CreateApi() = 0;
};

// 具体实现类 ImplA
class ImplA: public Api {
public:
    ImplA() { cout << "ImplA::" << __func__ << endl;}
    ~ImplA() { cout << "ImplA::" << __func__ << endl;}
    virtual void ApiMethod(string& str) {
        cout << "ImplA::" << __func__ + str << endl;
    }
};

// 具体实现类 ImplB
class ImplB: public Api {
public:
    ImplB() { cout << "ImplB::" << __func__ << endl;}
    ~ImplB() { cout << "ImplB::" << __func__ << endl;}
    virtual void ApiMethod(string& str) {
        cout << "ImplB::" << __func__ + str << endl;
    }
};

// ImplA 的抽象工厂方法
class ImplAFactory : public SimplyFactory {
public:
    virtual Api* CreateApi() {
        return new ImplA();
    }
};

// ImpB 的抽象工厂方法
class ImplBFactory : public SimplyFactory {
public:
    virtual Api* CreateApi() {
        return new ImplB();
    }
};

#endif //SIMPLEFACTORY_SIMPLYFACTORY_H
