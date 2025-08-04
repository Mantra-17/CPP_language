#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>

using namespace std;

int main()
{
  int n;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;

  pair<string , int> p[100];
  for(int i=0;i<n;i++){
    cout <<"Enter name first and then marks :";
    cin>>p[i].first>>p[i].second;
  }
for(int i=0;i<n;i++){
    cout<<p[i].first<<" "<<p[i].second<<endl;
  }
  cout<<endl;

  sort(p,p+n);
  cout<<"After sorting: "<<endl;
  for(int i=0;i<n;i++){
    cout<<p[i].first<<" "<<p[i].second<<endl;
  }
reverse(p,p+n);

cout<<"sorting in descending order\n";
  for(int i=0;i<n;i++){
    cout<<p[i].first<<" "<<p[i].second<<endl;
  }

  return 0;
}