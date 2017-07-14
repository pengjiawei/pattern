//
// Created by pengjiawei on 2017/7/14.
//

#include <cstdio>
#include "strategy.h"

void strategyA::action() {
    printf("%s","action strategyA");
}

void strategyB::action() {
    printf("%s","action strategyB");
}

strategyMgr::strategyMgr(Istrategy *istrategy_) : istrategy(istrategy_) {

}

void strategyMgr::actionWhat() {
    istrategy->action();
}
