#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    // Private Property
    double salary;

public:
    // Public Properties
    string name;
    string dept;
    string subject;

    // Member Function
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // Setter Function
    void setSalary(double s)
    {
        salary = s;
    }

    // Getter Function
    double getSalary()
    {
        return salary;
    }
};

class Student
{
public:
    string name;
    int age;
    int roll_no;
};

int main()
{
    // Creating Object
    Teacher t1;

    t1.name = "Shradha";
    t1.dept = "Computer Science";
    t1.subject = "C++";

    // Setting private variable using setter
    t1.setSalary(2500000);

    cout << "Teacher Name    : " << t1.name << endl;
    cout << "Department      : " << t1.dept << endl;
    cout << "Subject         : " << t1.subject << endl;
    cout << "Salary          : " << t1.getSalary() << endl;

    return 0;
}