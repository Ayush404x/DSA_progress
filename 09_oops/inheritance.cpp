#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;
    // person(string name,int age)
    // {
    //     this->name = name;
    //     this->age =age;

    // }
    person()
    {

    }
};
// here we are iherting a class named person which is a parent class
// here we are inherting property in public mode
class student : public person
{
    public:
    // name,roll,age etc we need
    int rollno;

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "rollno : " << rollno << endl;
        cout << "age : " << age << endl;
    }
};

int main()
{
    student s1;
    s1.name = "Ayush";
    s1.age = 19;
    s1.rollno= 36;
    s1.getInfo();
    return 0;


}
