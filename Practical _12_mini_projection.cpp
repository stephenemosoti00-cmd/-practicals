#include <iostream>
#include <vector>
using namespace std;

class Course {
public:
    string name;
    Course(string n) {
        name = n;
    }
};

class Student {
    string name;
    vector<Course*> courses;

public:
    Student(string n) {
        name = n;
    }

    void registerCourse(Course* c) {
        courses.push_back(c);
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Registered Courses:" << endl;
        for (Course* c : courses) {
            cout << "- " << c->name << endl;
        }
    }
};

int main() {
    Course c1("Programming");
    Course c2("Data Structures");

    Student s("Alice");
    s.registerCourse(&c1);
    s.registerCourse(&c2);

    s.display();
    return 0;
}
