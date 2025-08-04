#include<iostream>

int multiplynumbers(int n1,int n2)
{
    int multiply = n1*n2;
    return multiply;
}
 
int main()
{
    int n1=5;
    int n2 = 10;

    int result = n1*n2;
    int multiply = multiplynumbers(5,20);

    std::cout<< "multiplication is : "<<result<<std::endl;
    std::cout<< "multiplication is : "<<multiply<<std::endl;
 return 0;
 //thankyou;
}