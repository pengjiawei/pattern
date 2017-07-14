//
// Created by pengjiawei on 2017/7/13.
//

#include <cstdio>
#include "modulemethod.h"

void everyOne::openComputer() {
    printf("%s%s\n",name," open Computer");
}

everyOne::everyOne(std::string name_):name(name_) {

}

void everyOne::leave() {
    printf("%s%s\n",name," leave office");

}

developer::developer(const std::string &name_) : everyOne(name_) {}

void developer::doWork() {
    printf("%s%s\n",name," is coding");
}
