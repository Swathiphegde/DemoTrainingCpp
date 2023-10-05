#include<iostream>
//template <typename T>;
// void display(T arr[3]){
//     for(int i=0;i<3;i++){
        
//     }

// }
class Employee
{
private:
    /* data */
public:
    Employee(/* args */) {}
    ~Employee() {}
};
class Car
{
private:
    /* data */
public:
    Car(/* args */) {}
    ~Car() {}
};
int main()
{
    Car* arr1[3];
    Employee* arr2[3];
    for(int i=0;i<3;i++){
        arr1[i]=new Car();
        arr2[i]=new Employee();
    }

}