#include<iostream>

class Complex
{
private:
   float _real;
   float _imag;
public:
    Complex(float real,float imag)
    :_real(real),_imag(imag) {}

    ~Complex() {}

    Complex operator+(Complex n2){  //(1+2i)+(2+3i)=(3+5i)
        float r=this->_real+n2._real;
        float i=this->_imag+n2._imag;

        Complex temp(r,i);
        return temp;
    }
};
int main(){
    std::wcout<<"Hello";
}