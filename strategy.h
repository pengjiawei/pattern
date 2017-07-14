//
// Created by pengjiawei on 2017/7/14.
//

#ifndef MODE_STRATEGY_H
#define MODE_STRATEGY_H

class Istrategy{
public:
    virtual void action()=0;
};
class strategyA:public Istrategy{
public:
    void action();
};
class strategyB:public Istrategy{
public:
    void action();
};
class strategyMgr {
public:
    strategyMgr(Istrategy *istrategy);
    void actionWhat();
private:
    Istrategy* istrategy;
};


#endif //MODE_STRATEGY_H
