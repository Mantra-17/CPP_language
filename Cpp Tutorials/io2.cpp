#include<iostream>

int main()
{
    int age;
    int salary;
    std::string name;

    std::cout<<"Please enter your name : " <<std::endl;
    std::cin>>name;

    std::cout<<"Please enter your age : " <<std::endl;
    std::cin>>age;

    std::cout<<"Please enter your salary : " <<std::endl;
    std::cin>>salary;

    std::cout<<" welcome "<<name<<" ! you are "<<age<<" years old . your salary is "<<salary <<std::endl;

    return 0;
    }