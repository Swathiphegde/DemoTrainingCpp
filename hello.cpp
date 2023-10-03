#include<iostream>
int main(){
    std::cout<<"hello world!"<<std::endl;
    char s[]{"hello"};
    //*s-->pointer
    std::cout<<*s<<"\n";
    //*s-->string
    std::cout<<s<<"\n";
}