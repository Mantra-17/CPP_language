//lets understand priority queue

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.push(10);
    pq.push(70);
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}

//can also be used for sorting purose the one with highest priority is poopped