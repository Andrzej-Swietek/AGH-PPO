#ifndef SHOP_H
#define SHOP_H

#include <vector>
#include "Product.h"

class Shop {
private:
    std::vector<Product> products;

public:
    Shop();
    explicit Shop(const Product& e);
    Shop(const Product& e1, const Product& e2);
    Shop(int count, Product* arr[]);
    explicit Shop(const std::vector<Product>& v);
    Shop(const Shop& other);
    Shop(Shop&& other) noexcept;
    ~Shop();

    void Add(const Product& e);
    void Remove();
    void Clear();
    operator int() const;
    void Print() const;
};

#endif // SHOP_H

