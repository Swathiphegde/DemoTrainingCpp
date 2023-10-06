#include<iostream>
class NoMatchingExpression:public std::exception
{
private:
    std::string _msg;
public:
    std::string what(){
        return _msg;
    }
    NoMatchingExpression(std::string msg):_msg(msg){}
    ~NoMatchingExpression(){}
};

