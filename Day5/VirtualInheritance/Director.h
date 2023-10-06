#ifndef DIRECTOR_H
#define DIRECTOR_H
#include  "Manager.h"
#include "Director.h"
#include "Employee.h"
#include "Executive.h"
#include <ostream>
/*
In multiple inheritance in cpp, the most derived class(Manager) is responsilbe for
instantiating base class(Employee)
*/
class Director:public Manager,public Executive
{
private:
    float _budget;
public:
    Director(int id,std::string name,int size,std::string location,float budget)
    :Employee(id,name),Manager(size),Executive(location),_budget(budget)
    {}
    ~Director(){
        std::cout<<"\nDirector dstructor";
    };
    void calculateTax(){
        std::cout<<"Dirctor pays 50% tax\n";
    }

    float budget() const { return _budget; }

    friend std::ostream &operator<<(std::ostream &os, const Director &rhs);
};

inline std::ostream &operator<<(std::ostream &os, const Director &rhs) {
    os << static_cast<const Manager &>(rhs)
       << static_cast<const Executive &>(rhs)
       << " _budget: " << rhs._budget;
    return os;
}




#endif // DIRECTOR_H
