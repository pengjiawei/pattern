//
// Created by pengjiawei on 2017/7/14.
//

#ifndef MODE_PROXY_H
#define MODE_PROXY_H

class Iobject{
public:
    virtual void task()=0;
};
class concreteObject:public Iobject{
public:
    void task();
};
class proxy {
public:
    proxy(Iobject *iobject);

    void doProxy();

private:
    void before();
    void after();

private:
    Iobject* iobject;
};


#endif //MODE_PROXY_H
