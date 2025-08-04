#include<iostream>

int main()
{
    int age;
    std::string name;

    std::cout<<"Please enter your name : "<<std::endl;
    std::cin>> name;

    std::cout<<"Also enter your age"<<std::endl;
    std::cin>>age;

    std::cout<<"Hello " <<name<< "! you are " <<age<< " years old " <<std::endl;

    return 0;
}