#ifndef LAB5_SALT_H
#define LAB5_SALT_H

#include "Product.h"

class Salt : Product {
private:
    double _price;
public:
    Salt(double price) : Product(price) {
        _price = price;
    }
    ~Salt() = default;

    void OutputPrice() override {
        std::cout << "Price of the salt is " << _price << std::endl;
    }
    double get_price() override {
        return Product::get_price();
    }
};

#endif //LAB5_SALT_H
