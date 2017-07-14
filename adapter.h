//
// Created by pengjiawei on 2017/7/13.
//

#ifndef MODE_ADAPTER_H
#define MODE_ADAPTER_H

class V5{
public:
    virtual int getVoltage();
};
class V220{
public:
    int getVoltage();
};
class V5Adapter:public V5{
public:
    V5Adapter(V220 v220_);
    V220 v220;
    int getVoltage();
};
class adapter {

};


#endif //MODE_ADAPTER_H
