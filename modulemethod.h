//
// Created by pengjiawei on 2017/7/13.
//

#ifndef MODE_MODULEMETHOD_H
#define MODE_MODULEMETHOD_H

#include <string>
class everyOne{
public:
    everyOne(std::string name_);
    void openComputer();
    virtual void doWork()=0;
    void leave();
    std::string name;
};
class developer:public everyOne{
public:
    developer(const std::string &name_);
    void doWork();
};
class modulemethod {

};


#endif //MODE_MODULEMETHOD_H
