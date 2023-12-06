//
// Created by andrzej on 06.12.23.
//

#include <iostream>
#include <initializer_list>
#include<vector>

class Point {
public:
    Point(int x, int y) : x_(x), y_(y) {}

    // Constructor that takes an initializer_list
    Point(std::initializer_list<int> values) {
        if (values.size() == 2) {
            auto it = values.begin();
            x_ = *it;
            y_ = *(++it);
        } else {
            // Handle error or provide a default behavior
            x_ = 0;
            y_ = 0;
        }
    }

    // Getter functions
    int getX() const { return x_; }
    int getY() const { return y_; }

private:
    int x_;
    int y_;
};

std::vector<Point> generatePoints(int n) {
    std::vector<Point> points;

    for (int i = 0; i < n; ++i) {
        points.emplace_back(i, i * 2);
    }

    return points;
}

Point createPoint(int x, int y) {
    return {x, y};
}

int main() {
    // Using std::initializer_list to create an array of Point objects
    std::initializer_list<Point> points = {
            {1, 2},
            {3, 4},
            {5, 6}
    };

//    -------------------

    std::vector<Point> pointVector = {
            {7, 8},
            {9, 10},
            {11, 12}
    };

//    -------------------

    // Access and print the points from the initializer_list
    std::cout << "Points from initializer_list:" << std::endl;
    for (const Point& p : points) {
        std::cout << "X: " << p.getX() << ", Y: " << p.getY() << std::endl;
    }

//    -------------------

    // Access and print the points from the vector
    std::cout << "\nPoints from vector:" << std::endl;
    for (const Point& p : pointVector) {
        std::cout << "X: " << p.getX() << ", Y: " << p.getY() << std::endl;
    }

//    -------------------

    int n = 3;
    std::vector<Point> generatedPoints = generatePoints(n);

    std::cout << "Generated Points:" << std::endl;
    for (const Point& p : generatedPoints) {
        std::cout << "X: " << p.getX() << ", Y: " << p.getY() << std::endl;
    }

//    -------------------

    Point p3 = createPoint(5, 6);

    return 0;
}