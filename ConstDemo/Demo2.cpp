#include<iostream>
void Demo(){
    int n=10;
    //const in applied to int not int*
    //ptris a pointer to a CONSTANT integr
    const int * ptr =&n;

    //since pointer itself is not constant, its 'content' can be changed
    //so address inside ptr can be changed
    //since int part is constant, I cannot use pointer to change n's value
    ptr=&n;

    //since int part is constant,I cannot use pointer to change n's value
    *ptr=100; //not allowed
}