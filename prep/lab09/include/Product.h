#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class Product {
private:
    int type;
    int quantity;

public:
    Product(int t, int q);
    explicit Product(int t);
    ~Product();

    void SetCard(int q);
    int Compare(const Product& other) const;
    explicit operator int() const;
    operator std::string() const; // anty-pattern

    void Print() const;
    std::string ToString() const;

};

int Compare(Product product, Product product1);

#endif // PRODUCT_H

