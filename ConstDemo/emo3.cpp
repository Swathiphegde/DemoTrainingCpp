#include<iostream>

class emo3
{
private:
    
public:
    emo3(/* args */) =default;
    void magic() const{
        std::cout<<"Const magic function\n";
    }

    void dispaly(){
        std::cout<<"Not a constant member\n";
    }
    ~emo3() {}
};
int main(){
    //stack object
    const emo3 e1;

    //const object calling const method
    e1.magic(); //works

    //const object calling non const method
    //e1.dispaly();   //not allowed

    emo3 e2;
    //non const object calling const method
    e2.magic(); //allowed

    //non const object calling non const method
    e2.dispaly();



}