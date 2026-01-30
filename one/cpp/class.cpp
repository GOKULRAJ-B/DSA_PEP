#include <iostream>
using namespace std;
class student{
    public:
    string name;
    string course;
    int rollno;
    student(string name,int rollno,string course){
        this->name = name;
        this->rollno = rollno;
        this->course = course;
    }
    void print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Course: "<<course<<endl;
    }
};
int main(){
    //student c1("Gokul",15,"CSE");
    //student c2("Raj",16,"IT");
    //c1.print();
    //c2.print();
    student *c1 = new student("Gokul",15,"CSE");
    student *c2 = new student("Raj",16,"IT");
    c1->print();
    c2->print();
    delete c1;
    delete c2;
}