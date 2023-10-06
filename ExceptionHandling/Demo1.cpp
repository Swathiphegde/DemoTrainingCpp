/*
writing code for developers who will use this library
*/

#include<iostream>

float square(float number){
        return number*number;
    }
    float percentage(float number,float pct_factor){
        return number*(pct_factor/100);
    }
    float cube(float number){
        return number*number*number;
    }
    int factorial(int number){
        if(number<0){
            throw std::runtime_error("\nNegative number");
        }
        else  if(number==1){
            return 1;
        }
        else {
            return number*factorial(number-1);
        }
    }

void SwitchMenu(){
    while(true){
        std::cout<<"MENU : \n1)Square\n2)Cube\n3)Factorial\n4)Exit\n";

        std::cout<<"Enter choice\n";
        int choice;
        std::cin>>choice;


        float number;
        std::cout<<"Enter number\n";
        std::cin>>number;

        switch(choice){
            case 1:std::cout<<square(number)<<std::endl;
            break;
            case 2:std::cout<<cube(number)<<std::endl;
            break;
            case 3:
            try{
                std::cout<<factorial(static_cast<int>(number)); //explicit type casting ..if fails program will not compile
            }catch(std::runtime_error& er){
                std::cout<<er.what()<<"\n";
            }
            break;
            case 4:exit(0);
            default:std::cout<<"\nPlease try again";
        }


    }
}

int main(){
    SwitchMenu();
}