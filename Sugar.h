#ifndef LAB5_SUGAR_H
#define LAB5_SUGAR_H

#include "Product.h"

class Sugar : Product {
private:
    double _price;
public:
    Sugar(double price) : Product(price) {
        _price = price;
    }
    ~Sugar() = default;

    void OutputPrice() override {
        std::cout << "Price of the sugar is " << _price << std::endl;
    }
    double get_price() override {
        return Product::get_price();
    }
};

#endif //LAB5_SUGAR_H
