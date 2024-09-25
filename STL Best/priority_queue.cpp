#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>pq;
    //greater num on top :-MaxHeap

    pq.push(5);  //{5}
    pq.push(2);  //{5,2}
    pq.push(8);  //{8,5,2}
    pq.emplace(10);  //{10,8,5,2}

    cout<<pq.top()<<endl;  //10
    pq.pop(); //{8,5,2};
    cout<<pq.top()<<endl; //8


    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>>pg;
    pg.push(5);  ///{5}
    pg.push(2);  //{2,5}
    pg.push(8);  //{2,5,8}
    pg.push(10);  //{2,5,8,10}

    cout<<pg.top()<<endl;  //2

return 0;
}