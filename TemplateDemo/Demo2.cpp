#include<iostream>
#include<list>
#include<vector>
//alias for data type
using ls=std::list<std::string>;

//T represents any container(list,vector,...)
template <typename T>
class Employee
{
private:
    T _skills;
    std::string _id;
    float _age;
public:
    Employee (T skills,std::string id,float age) 
    :_skills(skills),_id(id),_age(age)
    {}
    ~Employee() {
        std::cout<<"Employee with ID : "<<_id<<"is destroyed\n";
    }

    template <typename A>
    friend std::ostream &operator<<(std::ostream &os, const Employee<A> &rhs) {
        //os << "_skills: " << rhs._skills;
    //for each loop
        for(std::string elem : rhs._skills){
            os<<elem<<"\t";
        }   
           os<< " _id: " << rhs._id<< " _age: " << rhs._age<<"\n";
        return os;
    }
    
};
int main(){

    ls skills={"coding","AI","version control"};
    //Object of class Employee of list of strings
    //ls specifies the type of T (std::list<std::string>)
    Employee<ls>* e1=new Employee<ls>(skills,"e101",34.2f); 
    std::cout<<*e1;
}
;
