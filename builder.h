//
// Created by pengjiawei on 2017/8/25.
//

#ifndef MODE_BUILDER_H
#define MODE_BUILDER_H


#include "string"

class demo {
public:
    class builder{
    public:
        builder* setId(int id_){
            this->id = id_;
            return this;
        }
        builder* setName(std::string name_){
            this->name = name_;
            return this;
        }
        int id;
        std::string name;
        demo build(){
            return demo(id,name);
        }
    };

    demo(int id_,std::string name_):id(id_),name(name_){
    }

    int id;
    std::string name;
};

#endif //MODE_BUILDER_H
