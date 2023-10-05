#include "Emloyee.h"

Emloyee::Emloyee(std::string id, std::string name, float salary, Departent dept, Project *project)
:_id(id),_name(name),_salary(salary),_dept(dept),_project(project)
{
}

std::ostream &operator<<(std::ostream &os, const Emloyee &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << " _dept: " <<DisplayEnum(rhs._dept)
       << " _project: " << rhs._project->name();
    return os;
}

std::string DisplayEnum(const Departent val){
    if(val==Departent::DEVELOPMENT)
        return "DEVELOPMENT";
    else if(val==Departent::INTEGRATION)
        return "INTEGRATION";
    else
        return "TESTING";

}
