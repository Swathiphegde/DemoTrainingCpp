#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include <ostream>
class Manager:virtual public Employee
{
private:
    int _teamSize;
public:
    Manager(int id,std::string name,int teamSize):Employee(id,name),_teamSize(teamSize){}
    Manager(int teamSize):_teamSize(teamSize){}

    virtual ~Manager() {
        std::cout<<"\nManager dstructor";
    }
    void calculateTax() override{
        std::cout<<"Manager pays 20% tax"<<"\n";
    }

    int teamSize() const { return _teamSize; }

    friend std::ostream &operator<<(std::ostream &os, const Manager &rhs);
};

inline std::ostream &operator<<(std::ostream &os, const Manager &rhs) {
    os << static_cast<const Employee &>(rhs)
       << " _teamSize: " << rhs._teamSize;
    return os;
}

#endif // MANAGER_H
