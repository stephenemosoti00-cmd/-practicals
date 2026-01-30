#include <iostream>
using namespace std;

class Employee {
public:
    virtual double getSalary() = 0;
};

class SalaryEmployee : public Employee {
    double salary;
public:
    SalaryEmployee(double s) {
        salary = s;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    Employee* e = new SalaryEmployee(50000);
    cout << "Salary: " << e->getSalary() << endl;
    delete e;
    return 0;
}
