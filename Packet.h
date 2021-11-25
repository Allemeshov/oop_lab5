#ifndef LAB5_PACKET_H
#define LAB5_PACKET_H

#include "Product.h"

class Packet : Product {
private:
    double _price;
public:
    Packet(double price) : Product(price) {
        _price = price;
    }
    ~Packet() = default;

    void OutputPrice() override {
        std::cout << "Price of the packet is " << _price << std::endl;
    }
    double get_price() override {
        return Product::get_price();
    }
};

#endif //LAB5_PACKET_H
