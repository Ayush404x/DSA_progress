#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    //Acccess modifiers of theree types 1.public 2.private 3.protected 
private:
    // Private Property
    double salary;

public:
    // Public Properties
    Teacher(){
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
    
    //Constructor ko call jati jaissse hum loog object banate hai 
    //here we have made only one object from teacher class 
    //so thata why contructor is printed only once in this code
    //if we create two object from the it will print constructor twice
    Teacher t1;
    Teacher t2;

    t1.name = "Shradha";
    //t1.dept = "Computer Science";
    t1.subject = "C++";

    // Setting private variable using setter
    t1.setSalary(2500000);

    // cout << "Teacher Name    : " << t1.name << endl;
    // cout << "Department      : " << t1.dept << endl;
    // cout << "Subject         : " << t1.subject << endl;
    // cout << "Salary          : " << t1.getSalary() << endl;
    cout<<t1.dept<<endl;
    return 0;
}