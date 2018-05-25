//
// Created by pengjiawei on 2017/9/8.
//

#ifndef MODE_DECORATOR_H
#define MODE_DECORATOR_H


#include <cstdio>

class component{
public:
    virtual void operate() = 0;
};

class componentA:public component{
public:
    void operate(){
        printf("do with componentA\n");
    }
};
class decorator {
public:
    virtual void decorate() = 0;
    decorator(component* c_){
        c = c_;
    }
protected:
    component* c;
};

class decoratorA:public decorator{
public:
    decoratorA(component *c_);
    void operate(){
        printf("decorated with decoratorA\n");
        c->operate();
    }
    void decorate(){
        operate();
    }
};

#endif //MODE_DECORATOR_H
