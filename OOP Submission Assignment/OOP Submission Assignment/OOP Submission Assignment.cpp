// OOP Submission Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Dog {
public:
    string breed;
    string color;
    double height;
    int weight;

    void Shake() {
        cout << "The " + breed + " shakes." << "\n";
    }

    void Sit() {
        cout << "The " + breed + " sits." << "\n";
    }

    void LayDown() {
        cout << "The " + breed + " lays down." << "\n";
    }
};

int main()
{
    Dog myDog;

    myDog.breed = "hound";
    myDog.color = "brown";
    myDog.height = 2.0;
    myDog.weight = 60;

    myDog.Shake();
    return 0;
}