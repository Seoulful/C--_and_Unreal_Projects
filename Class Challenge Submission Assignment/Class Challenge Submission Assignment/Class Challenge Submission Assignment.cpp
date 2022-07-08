// Class Challenge Submission Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Shape {
public:
    string color;

    void getArea() {
        cout << "The area is x." << "\n";
    }
};

class Rectangle : public Shape {
    int height;
    int width;
};

class Triangle : public Shape {
    int base;
    int height;
};

class Circle : public Shape {
    int radius;
};

int main()
{
    Circle circle;
    circle.getArea();
}