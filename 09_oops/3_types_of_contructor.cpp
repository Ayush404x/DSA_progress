#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    string name;
    string dept;
    string subject;
    double salary;
    // Paramaterized constructor
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    // non parameterized constructor
    Teacher()
    {
        dept = "Computer science";
    }
    // copy constructor
    Teacher(Teacher &orgobj){//pass by reference
        cout<<"I am a constructor copy/copy ";
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;
        


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
    //t1.getinfo();
    Teacher t2(t1);//efault copy constructor call hogaya
    t2.getinfo();
    return 0;
}