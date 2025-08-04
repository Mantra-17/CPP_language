#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str , rev = "";
 cout<<"Enter the word : ";
 cin>>str;
    for(int i=str.length()-1 ; i>=0;i--)
    {
rev += str[i];

    }

if(str == rev )
{
    cout<<"It's the palindorme \n";
}
else{
    cout<<"Not a palindrome\n";
}


  return 0;
}