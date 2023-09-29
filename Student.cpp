#include<iostream>
#include "Department.h"
class Student{
    private:
        int _roll_number;
        std::string _name;
        float _fees;
        char _grade;
        Department _dept;
    public:
    Student()=default;
    Student(
        int rnum,
        std::string name,
        float fees,
        char grade,
        Department dept
    ){
        this->_name=name;
        this->_fees=fees;
        this->_grade=grade;
        this->_roll_number=rnum;
        this->_dept=dept;
        

    }
    //Destructor
    ~Student(){
        std::cout<<"Studen with roll number "<<this->_roll_number<<" is deleted"<<"\n";
    }

};

int main(){
    //stack
    //s1,s2-type-Student
    Student s1(201,"Amal",5885.98f,'B',Department::IT);
    Student s3(203,"Amal",5885.98f,'B',Department::IT);

    //heap
    //s2-type-Student pointer
    Student* s2=new Student(202,"Aditya",7676.98f,'A',Department::CS);
    Student* s4=new Student(204,"Ajay",7676.98f,'A',Department::AI_ML);

    //calls ~Student()
    delete s2;

    Student arr[2]={s1,s3};
    Student* heapArr[2]={s2,s4};
}