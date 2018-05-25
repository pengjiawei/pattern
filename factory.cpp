//
// Created by pengjiawei on 2017/8/19.
//

#include <cstdio>
#include "factory.h"

void productA::print() {
    printf("i am a product A!");
}

void productB::print() {
    printf("a am a product B!");
}

product* factoryA::createProduct() {
    productA* A = new productA();
    return A;
}

product* factoryB::createProduct() {
    productB* B = new productB();
    return B;
}

product* manager::createProduct(factory* factory_) {
    return factory_->createProduct();
}
