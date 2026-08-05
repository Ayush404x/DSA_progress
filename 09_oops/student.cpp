#include<iostream>
#include<string>
using namespace std;
class student {
public:
    string name;
    double cgpa;


    student(string name,double cgpa){
        this->name=name;
        this->cgpa=cgpa;
    }

    student(student &obj){
        this->name = obj.name;
    }
    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Name : " <<cgpa<<endl;
    }
};
int main(){
    student s1("rahul kuamr",8.9);
    student s2(s1);
    s2.getinfo();
    return 0;
}