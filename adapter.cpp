//
// Created by pengjiawei on 2017/7/13.
//

#include "adapter.h"

int V5::getVoltage() {
    return 5;
}

int V220::getVoltage() {
    return 220;
}


V5Adapter::V5Adapter(V220 v220_) {
    v220 = v220_;
}

int V5Adapter::getVoltage() {
    return v220.getVoltage();
}
