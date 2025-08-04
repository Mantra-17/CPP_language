
#include<iostream>

using namespace std;



void nForest(int n) {

    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"  ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<"* ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;

    cin>>n;

    nForest(n);


}