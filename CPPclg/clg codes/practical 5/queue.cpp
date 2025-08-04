#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Front element: "<<q.front()<<endl;//10
    cout<<"Back element: "<<q.back()<<endl;//30
    q.pop();//10 popped out

    cout<<"After pop. front: "<<q.front()<<endl;//20

    return 0;
}

//follows FIFO means first in is first out..