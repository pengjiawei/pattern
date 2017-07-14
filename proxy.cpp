//
// Created by pengjiawei on 2017/7/14.
//

#include <cstdio>
#include "proxy.h"


void concreteObject::task() {
    printf("%s\n","i am object,i can code");
}

proxy::proxy(Iobject *iobject_) : iobject(iobject_) {}

void proxy::doProxy() {
    before();
    iobject->task();
    after();
}

void proxy::before() {
    printf("%s\n","i am the proxy,i will make you can eat something");
}

void proxy::after() {
    printf("%s\n","i am the proxy,now you can finish eat and wash your hand");
}
