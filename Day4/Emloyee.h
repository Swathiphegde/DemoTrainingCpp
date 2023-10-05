#ifndef EMLOYEE_H
#define EMLOYEE_H

#include<iostream>
#include "Department.h"
#include "Project.h"

class Emloyee
{
private:
    std::string _id;
    std::string _name;
    float _salary;
    Departent _dept;
    Project* _project;
    
public:
    Emloyee()=delete;
    Emloyee(std::string id,
    std::string name,
    float salary,
    Departent dept,
    Project* project);

    Emloyee(const Emloyee& )=default;

    ~Emloyee() {
        std::cout<<"\nEmployee with ID : "<<_id<<" is destroyed";
    }

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    Departent dept() const { return _dept; }

    Project* project() const { return _project; }

    friend std::ostream &operator<<(std::ostream &os, const Emloyee &rhs);
    
};

#endif // EMLOYEE_H
