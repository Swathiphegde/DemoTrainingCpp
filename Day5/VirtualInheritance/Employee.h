#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>

class Employee
{
private:
    int _id;
    std::string _name;
public:
    Employee(int id,std::string name):_id(id),_name(name){}
    Employee(){}

    virtual ~Employee() {
        std::cout<<"\nEmployee dstructor";
    }
    virtual void calculateTax()=0;

    int id() const { return _id; }

    std::string name() const { return _name; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

inline std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name;
    return os;
}

#endif // EMPLOYEE_H
