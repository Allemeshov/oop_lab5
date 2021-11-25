#ifndef LAB5_MATCHES_H
#define LAB5_MATCHES_H

#include "Product.h"

class Matches : Product {
private:
    double _price;
public:
    Matches(double price) : Product(price) {
        _price = price;
    }
    ~Matches() = default;

    void OutputPrice() override {
        std::cout << "Price of the matches is " << _price << std::endl;
    }
    double get_price() override {
        return Product::get_price();
    }
};

#endif //LAB5_MATCHES_H
