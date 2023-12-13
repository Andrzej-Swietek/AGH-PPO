#include "Product.h"
#include "../include/Product.h"


Product::Product(int t, int q) : type(t), quantity(q) {}

Product::Product(int t) : type(t), quantity(0) {}

Product::~Product() {}

void Product::SetCard(int q) {
    quantity = q;
}

int Product::Compare(const Product& other) const {
    return quantity - other.quantity;
}

Product::operator int() const {
    return quantity;
}

Product::operator std::string() const {
    return "<typ=" + std::to_string(type) + ", ilosc=" + std::to_string(quantity) + ">";
}

void Product::Print() const {
    std::cout << "typ: " << type << ", ilosc sztuk: " << quantity << std::endl;
}

std::string Product::ToString() const {
    return "<typ=" + std::to_string(type) + ", ilosc=" + std::to_string(quantity) + ">";
}

int Compare(Product product, Product product1) {
    return 0;
}
