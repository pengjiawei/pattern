//
// Created by pengjiawei on 2017/8/19.
//

#ifndef MODE_FACTORY_H
#define MODE_FACTORY_H

class product{
public:
    virtual void print() = 0;
};
class productA : public product{
public:
    void print();
};
class productB : public product{
public:
    void print();
};
class factory {
public:
    virtual product* createProduct() = 0;
};
class factoryA : public factory{
public:
    product* createProduct();
};
class factoryB : public factory{
public:
    product* createProduct();
};

class manager{
public:
    product* createProduct(factory* factory_);
};


#endif //MODE_FACTORY_H
