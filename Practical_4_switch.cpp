#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Menu:\n1. Add\n2. Subtract\n3. Multiply\nEnter your choice: ";
    cin >> choice;

    double x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    switch(choice) {
        case 1:
            cout << "Sum: " << x + y << endl;
            break;
        case 2:
            cout << "Difference: " << x - y << endl;
            break;
        case 3:
            cout << "Product: " << x * y << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
