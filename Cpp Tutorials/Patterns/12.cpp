#include<iostream>


//here if we detect the formula for finding the space question would be very very easy let's go
using namespace std;

void nForst(int n)
{
    int space = 2*(n-1);
    for(int  i=0; i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}


int main()

{
    int n;
    cin>>n;

    nForst(n);
}