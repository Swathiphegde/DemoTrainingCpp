#include<iostream>

int main(){
    int arr[]={10,20,30};
    std::cout<<"Content of arr (address of first location)"<<arr<<"\n";
    
    std::cout<<"Address of first location : "<<(arr+0)<<"\n"; //0x100H+0*4 = 0x100H
    
    std::cout<<"Content of first location : "<<*(arr+0)<<"\n";
    
    std::cout<<"Content of second location : "<<*(arr+1)<<"\n";

    int i=3;
    while(i){
        std::cout<<"Array index : "<<i<<" elem : "<<(arr+i)<<"/n";
        i--;
    
    }


}