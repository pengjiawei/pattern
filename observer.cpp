//
// Created by pengjiawei on 2017/7/13.
//

#include "observer.h"

void observerA::receive(std::string msg) {
    printf("%s%s\n","i am observerA receive the msg = ",msg);
}

void observerB::receive(std::string msg) {
    printf("%s%s\n","i am observerB receive the msg = ",msg);

}

void subjectA::add(observer *observer1) {
    vec.push_back(observer1);
}

void subjectA::remove(observer *observer1) {
    for (auto iterator = vec.begin(); iterator != vec.end(); ++iterator) {
        if (*iterator == observer1){
            vec.erase(iterator);
        }
    }
}

void subjectA::notify() {
    for (auto iterator = vec.begin(); iterator != vec.end(); ++iterator) {
        (*iterator)->receive("subjectA");
    }
}
