#include<iostream>
using namespace std;


int factorial(int level)
{
    if(level==1) return 1;
    return level*factorial(level-1);
}

int main()
{
   cout<<factorial(5);
    
}