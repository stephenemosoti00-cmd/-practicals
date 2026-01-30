#include <iostream>
using namespace std;

class Square {
protected:
    double side;

public:
    Square(double s) {
        side = s;
    }

    double area() {
        return side * side;
    }
};

class Cube : public Square {
public:
    Cube(double s) : Square(s) {}

    double surfaceArea() {
        return 6 * side * side;
    }

    double volume() {
        return side * side * side;
    }
};

int main() {
    Cube c(5);
    cout << "Surface Area: " << c.surfaceArea() << endl;
    cout << "Volume: " << c.volume() << endl;
    return 0;
}
