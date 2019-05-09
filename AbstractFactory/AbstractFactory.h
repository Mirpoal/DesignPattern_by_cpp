//
// Created by felix on 19-5-1.
//

#ifndef ABSTRACTFACTORY_ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_ABSTRACTFACTORY_H

#include <string>
#include <iostream>
using std::string;using std::cout;using std::endl;

// 抽象对象A 基类
class AbstractProductA {
public:
    AbstractProductA() {}
    virtual ~AbstractProductA() {}
    // 抽象基类中的抽象方法
    virtual void AbstractProductAMethod(string& str) = 0;
};

// 抽象对象B 基类
class AbstractProductB {
public:
    AbstractProductB() {}
    virtual ~AbstractProductB() {}
    virtual void AbstractProductBMethod(string& str) = 0;
};

// 具体对A 实现类 A1
class ConcreteProductA1 : public AbstractProductA {
public:
    ConcreteProductA1() {}
    virtual ~ConcreteProductA1() {}
    virtual void AbstractProductAMethod(string& str) { cout << "productA1 line controlled by" << str << endl;}
};

// 具体对A 实现类 A2
class ConcreteProductA2 : public AbstractProductA {
public:
    ConcreteProductA2() {}
    virtual ~ConcreteProductA2() {}
    virtual void AbstractProductAMethod(string& str) { cout << "productA2 line controlled by" << str << endl;}
};

// 具体对B 实现类 B1
class ConcreteProductB1 : public AbstractProductB {
public:
    ConcreteProductB1() {}
    virtual ~ConcreteProductB1() {}
    virtual void AbstractProductBMethod(string& str) { cout << "productB1 line controlled by" << str << endl;}
};

// 具体对B 实现类 B2
class ConcreteProductB2 : public AbstractProductB {
public:
    ConcreteProductB2() {}
    virtual ~ConcreteProductB2() {}
    virtual void AbstractProductBMethod(string& str) { cout << "productB2 line controlled by" << str << endl;}
};

// 抽象工厂类
class AbstractFactory {
public:
    AbstractFactory() {}
    virtual ~AbstractFactory() {}
    // 一系列对象创建接口
    virtual AbstractProductA* CreateProductA() = 0;
    virtual AbstractProductB* CreateProductB() = 0;
};

// 抽象工厂的具体实现工厂 A
class ConcreteFactoryA : public AbstractFactory {
public:
    ConcreteFactoryA() {};
    virtual ~ConcreteFactoryA() {};
    virtual AbstractProductA* CreateProductA() { return new ConcreteProductA1();};
    virtual AbstractProductB* CreateProductB() { return new ConcreteProductB1();}
};

// 抽象工厂的具体实现工厂 B
class ConcreteFactoryB : public AbstractFactory {
public:
    ConcreteFactoryB() {};
    virtual ~ConcreteFactoryB() {};
    virtual AbstractProductA* CreateProductA() { return new ConcreteProductA2();}
    virtual AbstractProductB* CreateProductB() { return new ConcreteProductB2();}
};


#endif //ABSTRACTFACTORY_ABSTRACTFACTORY_H
