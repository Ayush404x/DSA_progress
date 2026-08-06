#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    int roll;
};
class teacher {
    public:
    string subject;
    double salary;
};
class TA :public student ,public teacher
{

};

int main()
{
    TA t1;
    t1.name="Ayush kumar";
    t1.subject = "physics";
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    return 0;
}
