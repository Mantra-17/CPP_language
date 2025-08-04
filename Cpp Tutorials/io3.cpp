#include<iostream>
#include<string>

int main()
{
    //code fro taking full name as input 
    int age;
    std::string full_name;

    std::cout<<"Please write your full name and age : "<<std::endl;

    std::getline(std::cin,full_name);//logic use for taking whole input with space
    std::cin>>age;

    std::cout<<"Welcome "<<full_name<<" you are "<<age<<"years old"<<std::endl;

    return 0;
}