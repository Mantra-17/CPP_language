#include<iostream>

using namespace std;

void nForst(int n)
{
    for(int  i=0; i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=0;j<2*n -(2*i+1);j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}


int main()

{
    int n;
    cin>>n;

    nForst(n);
}