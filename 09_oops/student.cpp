#include <iostream>
#include <string>
using namespace std;

class student {
public:
    string name;
    double *cgpaptr;

    // Parameterized Constructor
    student(string name, double cgpa) {
        this->name = name;
        cgpaptr = new double;   // Correct data type
        *cgpaptr = cgpa;
    }

    // Copy Constructor
    student(student &obj) {
        this->name = obj.name;
        cgpaptr = new double;      // Allocate new memory
        *cgpaptr = *(obj.cgpaptr); // Copy the value
    }

    void getinfo() {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaptr << endl; // Dereference pointer
    }

    // Destructor
    ~student() {
        cout<<"Hi i delete every thing";
        delete cgpaptr;
    }
};

int main() {
    student s1("Rahul Kumar", 8.9);
    student s2(s1);

    s2.getinfo();

    return 0;
}