#include <iostream>
#include "modulemethod.h"
#include "adapter.h"
#include "observer.h"
#include "erase.h"
#include "strategy.h"
#include "proxy.h"
#include "factory.h"
#include "decorator.h"
#include "builder.h"
int main() {
    //modulemethod test
//    everyOne* everyOne1 = new developer("A");
//    everyOne1->openComputer();
//    everyOne1->doWork();
//    everyOne1->leave();
//    std::cout << "Hello, World!" << std::endl;
     //adapater
//    V220 v220;
//    V5* v5 = new V5Adapter(v220);
//    std::cout << v5->getVoltage();
     //observer
//    observer* observer1 = new observerA;
//    observer* observer2 = new observerB;
//    subject* subject1 = new subjectA;
//    subject1->add(observer1);
//    subject1->add(observer2);
//    subject1->notify();
//    subject1->remove(observer1);
//    subject1->notify();
    //erase
//    std::vector<int> vector1 = {1,2,3,4};
//    myVec* myVec1 = new myVec;
//    myVec1->myVecErase(vector1,2);
//    for (auto &&item : vector1) {
//        printf("%d\n",item);
//    }
     //strategy
//    strategyMgr* strategyMgr1 = new strategyMgr(new strategyA);
//    strategyMgr1 = new strategyMgr(new strategyB);
//    strategyMgr1->actionWhat();
    //proxy
//    proxy* p = new proxy(new concreteObject());
//    p->doProxy();
//    return 0;
    //factory
//     factory* factory1 = new factoryA();
//     manager* manager1 = new manager();
//     manager1->createProduct(factory1)->print();
//    factory1 = new factoryB;
//    manager1->createProduct(factory1)->print();
    //decorator
//    component* c = new componentA();
//    decorator* d = new decoratorA(c);
//    c->operate();
//    printf("after decorated\n");
//    d->decorate();

    demo::builder* b = new demo::builder();
    demo d = b->setId(10)->setName("worker")->build();
    std::cout << d.name <<" , "<<d.id;
}