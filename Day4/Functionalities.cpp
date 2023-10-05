#include "Functionalities.h"

void createObject(Emloyee *arr1[3], Project *arr2[3])
{
    arr2[0]=new Project("ADAS",12,83838.99f);
    arr2[1]=new Project("KAP",45,67776.7f);
    arr2[2]=new Project("CAP",56,9898.6f);

    arr1[0]=new Emloyee("e101","swathi",6565.7f,Departent::DEVELOPMENT,arr2[0]);
    arr1[1]=new Emloyee("e102","Amit",6885.7f,Departent::TESTING,arr2[1]);
    arr1[2]=new Emloyee("e103","Smith",4565.7f,Departent::INTEGRATION,arr2[2]);

}

Emloyee* employeeWithHighestSalary(Emloyee *arr1[3])
{
    if(checkNullPtr(arr1)){
        throw std::runtime_error("Data is empty!!!");
    }
    //Calling a method takes more time
    float max=arr1[0]->salary();
    Emloyee* emp{arr1[0]};
    float currentSal=0.0f;
    for(int i=0;i<3;i++){
        currentSal=arr1[i]->salary();
        if(max<currentSal)
        {
            max=currentSal;
            emp=(arr1[i]);
        }
    }
    return emp;
}

int countEmployeeWithGivenDepartment(Emloyee *arr1[3],Departent dept)
{
    if(checkNullPtr(arr1)){
        throw std::runtime_error("Data is empty!!");
    }
    int c=0;
    for(int i=0;i<3;i++){
        if(dept==arr1[i]->dept()){
            c++;
        }
    }
    return c;
}

float averageBudget(Emloyee *arr1[3])
{
    if(checkNullPtr(arr1)){
        throw std::runtime_error("Array is empty!!");
    }
    float average=0.0f;
    for(int i=0;i<3;i++){
        average+=arr1[i]->project()->budget();
    }
    return average/3;
}

void freeMemory(Emloyee *arr1[3])
{
    //delete the inner Project pointer
    for(int i=0;i<3;i++){
        delete arr1[i]->project();
        delete arr1[i];
    }
}

bool checkNullPtr(Emloyee* arr1[3]){
    bool flag=true;
    for(int i=0;i<3;i++){
        if(arr1[i]!=nullptr)
            flag=false;
    }
    return flag;
}