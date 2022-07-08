// Class Challenge Submission Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Shape {
public:
    string color;

    int getArea() {
        
    }
};

class Rectangle : public Shape {
public:
    int height;
    int width;

    int getArea() {
        int x = height;
        int y = width;
        return x * y;
    }
};

class Triangle : public Shape {
public:
    int base;
    int height;

    int getArea() {
        int x = base;
        int y = height;

        return x * 0.5 * y;
    }
};

class Circle : public Shape {
public:
    int radius;

    int getArea() {
        int x = radius;
        return 3.14159 * pow(x, 2);
    }
};

int main()
{
    Circle circle;
    circle.getArea();
}