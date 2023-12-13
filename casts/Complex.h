//
// Created by andrzej on 13.12.23.
//

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <vector>
#include <functional>
#include<math.h>

class ComplexNumber {
public:

    // Constructor
    ComplexNumber(double real, double imag) : real(real), imag(imag) {}

    // Copy Constructor
    ComplexNumber(const ComplexNumber& other) : real(other.real), imag(other.imag) {
        std::cout << "Copy Constructor called." << std::endl;
    }

    // Converting Constructor ( double -> ComplexNumber )
    ComplexNumber(double real_value) : real(real_value), imag(0.0) {
        std::cout << "Converting Constructor called." << std::endl;
    }

    // Move Constructor
    ComplexNumber(ComplexNumber&& other) noexcept : real(other.real), imag(other.imag) {
        // Set the source object to a valid state after move
        other.real = 0.0;
        other.imag = 0.0;

        std::cout << "Move Constructor called." << std::endl;
    }

    operator int() const {
        return static_cast<int>(real);
    }

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }

    double getMagnitude() const {
        return std::sqrt(real * real + imag * imag);
    }

    // Assignment operator - from other ComplexNUmber
    ComplexNumber& operator=(const ComplexNumber& other)
    {
        if (this != &other) {
            real = other.real;
            imag = other.imag;
            std::cout << "Assignment Operator called." << std::endl;
        }
        return *this;
    }

    bool operator == (ComplexNumber rhs)
    {
        return (real == rhs.real &&
                imag == rhs.imag);
    }

    // Conversion operator for casting to std::vector<double>
    operator std::vector<double>() const
    {
        return {real, imag};
    }

private:
    double real;
    double imag;
};


/** @example
 * int main()
 * {
 *   // a Complex object
 *   ComplexNumber com1(3.0, 0.0);
 *   ComplexNumber com2 = 4.5;  // Converting constructor is called here
 *
 *   if (com1 == (ComplexNumber)3.0)
 *       cout << "Same";
 *   else
 *       cout << "Not Same";
 *
 *   // Creating a complex number
 *   ComplexNumber com1(3.0, 2.0);
 *
 *   // Copy Constructor
 *   ComplexNumber com2 = com1;
 *
 *   // Move Constructor
 *   ComplexNumber com3 = std::move(com1);
 *
 *   // Assignment Operator
 *   ComplexNumber com4(5.0, 6.0);
 *   com4 = com2;
 *
 *   // Converting to std::vector<double>
 *   std::vector<double> vec = static_cast<std::vector<double>>(com1);
 *   for (const auto& elem : vec) {
 *       std::cout << elem << " ";
 *   }
 *   std::cout << std::endl;
 *
 *   return 0;
 * }
 */

/** @sidenotes
 * ```noexcept``` is a specifier that is used to declare that a function or an expression will not throw any exceptions.
 * It can be applied to both function declarations and lambda expressions.
 * The purpose of noexcept is to provide information to the compiler and potentially enable certain optimizations.
 */

#endif //COMPLEX_H
