#include "Shop.h"

Shop::Shop() {}

Shop::Shop(const Product& e) {
    products.push_back(e);
}

Shop::Shop(const Product& e1, const Product& e2) {
    products.push_back(e1);
    products.push_back(e2);
}

Shop::Shop(int count, Product* arr[]) {
    for (int i = 0; i < count; ++i) {
        products.push_back(*arr[i]);
    }
}

Shop::Shop(const std::vector<Product>& v) : products(v) {}

Shop::Shop(const Shop& other) : products(other.products) {}

Shop::Shop(Shop&& other) noexcept : products(std::move(other.products)) {}

Shop::~Shop() {}

void Shop::Add(const Product& e) {
    products.push_back(e);
}

void Shop::Remove() {
    if (!products.empty()) {
        products.pop_back();
    }
}

void Shop::Clear() {
    products.clear();
}

Shop::operator int() const {
    int sum = 0;
    for (const auto& product : products) {
        sum += int(product);
    }
    return sum;
}

void Shop::Print() const {
    std::cout << "---" << std::endl;
    for (const auto& product : products) {
        product.Print();
    }
    std::cout << "---" << std::endl;
}

