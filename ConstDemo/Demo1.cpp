#include "/workspaces/DemoTrainingCpp/ScenarioD/Vehicle.h"
#include<iostream>

/*
Use case 1: with variables of primitive types which are not pointers
*/

void Demo(){
    //const(immutable)
    //'constant integer'
    const int n=10;
    //'constant characer'
    const char grade='A';

    //allowed
    std::cout<<n<<"\n"<<grade<<"\n";

    //Not allowed
    //n=202;
}

int main(){
    Demo();
}