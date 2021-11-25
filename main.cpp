#include <iostream>
#include <vector>
#include "Product.h"
#include "Packet.h"
#include "Salt.h"
#include "Sugar.h"
#include "Matches.h"

int main() {

    auto packet = new Packet(30);
    auto salt = new Salt(100);
    auto sugar = new Sugar(45);
    auto matches = new Matches(15);

    packet->OutputPrice();
    salt->OutputPrice();
    sugar->OutputPrice();
    matches->OutputPrice();

    double sum = 0;

    sum += packet->get_price();
    sum += salt->get_price();
    sum += sugar->get_price();
    sum += matches->get_price();

    std::cout << "Sum of products: " << sum << std::endl;

    return 0;
}
