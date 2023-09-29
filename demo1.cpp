#include<iostream>

int main(){
    int n=10;
    int *ptr=&n;
    int **sptr=&ptr;

    //data of n
    std::cout<<"Data of n : "<<n<<"\n";

    //data of ptr
    std::cout<<"data of ptr : "<<ptr<<"\n";

    //data of sptr
    std::cout<<"data of sptr : "<<sptr<<"\n";
    
    //data of n from ptr
    std::cout<<"data of n from ptr : "<<*ptr<<"\n";

    //data of n from sptr
    std::cout<<"data of n from sptr : "<<**sptr<<"\n";

    //data of ptr from sptr
    std::cout<<"data of ptr from sptr : "<<*sptr<<"\n";

    //addr. of n
    std::cout<<"addr. of n : "<<&n<<"\n";

    //addr. of ptr
    std::cout<<"addr. of ptr : "<<&ptr<<"\n";

    //addr. of sptr
    std::cout<<"addr. of sptr : "<<&sptr<<"\n";

}