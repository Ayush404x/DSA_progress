#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // Acccess modifiers of theree types 1.public 2.private 3.protected
private:
    // Private Property
    double salary;

public:
    string name;
    string dept;
    string subject;
    // Paramaterized constructor
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    // non parameterized constructor
    Teacher()
    {
        dept = "Computer science";
    }
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

    void getinfo()
    {
        cout << "name :" << name << endl;
        cout << "subject :" << subject << endl;
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
    Teacher t1("Ayush", "CS", "C++", 250000);
    t1.getinfo();
    return 0;
}