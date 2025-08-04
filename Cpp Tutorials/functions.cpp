#include<iostream>

int addnumbers(int first_num,int second_num){//function defination
    int result = first_num+second_num;//declaring varibale
    return result; //value return
}

int main()
{
 
int first_num{3};
int second_num{7};

std::cout<<"First number is :"<<first_num<<std::endl;
std::cout<<"Second number is :"<<second_num<<std::endl;

int result = addnumbers(58,10);//by function calling
int sum = first_num+second_num;//directly

std::cout<<"sum of two number is :"<<result<<std::endl;
std::cout<<"sum of two number is :"<<sum<<std::endl;

return 0;

}