#ifndef LAB5_PRODUCT_H
#define LAB5_PRODUCT_H

#include <iostream>

class Product {
private:
    double _price;
public:
    Product(double price) {
        _price = price;
    }
    ~Product();

    virtual void OutputPrice() {
        std::cout << "Price is " << _price << std::endl;
    }

    virtual double get_price() {
        return _price;
    }
};

#endif //LAB5_PRODUCT_H
