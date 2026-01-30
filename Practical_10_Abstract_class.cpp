Copy code
Cpp
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }
};

int main() {
    Shape* s = new Rectangle(4, 5);
    cout << "Area: " << s->area() << endl;
    delete s;
    return 0;
}
✅ PRACTICAL
