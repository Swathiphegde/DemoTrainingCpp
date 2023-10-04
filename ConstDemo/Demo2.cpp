#include<iostream>
void Demo(){
    int n=10,n2=20;
    //const in applied to int not int*

    //ptr is a pointer to a "CONSTANT integr"
    const int * ptr =&n;

    //since pointer itself is not constant, its 'content' can be changed
    //so address inside ptr can be changed
    ptr=&n2;

    //since int part is constant, I cannot use pointer to change n's value
    //since int part is constant,I cannot use pointer to change n's value
    //*ptr=100; //not allowed

    //Constant integer-->const applied to int same as above
    int const *ptr2=&n;

    //Constant pointer -->Content of pointer(address) cannot be changed
    int * const ptr3=&n2;
    //ptr3=&n1; //not allowed
    
    //value of ptr4 (address) and value of n both cannot be changed
    const int * const ptr4=&n;
}