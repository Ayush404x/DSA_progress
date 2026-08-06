#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;
};
class student : public person
{
    public:
    int rollno;
};
class gradstudent :public student{
    public:
    string reasurchArea;

};

int main()
{
    gradstudent s1;
    s1.name = "captain";
    s1.reasurchArea="CSE";
    cout<<s1.name<<endl;
    cout<<s1.reasurchArea<<endl;
    return 0;


}
