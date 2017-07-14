//
// Created by pengjiawei on 2017/7/13.
//

#ifndef MODE_OBSERVER_H
#define MODE_OBSERVER_H

#include <string>
#include <vector>

class observer {
public:
    virtual void receive(std::string msg)=0;
};
class observerA:public observer{
public:
    void receive(std::string msg);
};
class observerB:public observer{
public:
    void receive(std::string msg);
};
class subject {
public:
    virtual void add(observer* observer1)=0;
    virtual void remove(observer* observer1)=0;
    virtual void notify()=0;

    std::vector<observer*> vec;
};
class subjectA:public subject{
public:
    void add(observer* observer1);
    void remove(observer* observer1);
    void notify();
};


#endif //MODE_OBSERVER_H
