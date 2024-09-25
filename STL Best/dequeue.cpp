#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);

    dq.push_front(3);
    dq.emplace_front(4);

    for(auto i: dq){
        cout<<i<<" ";  //4 3 1 2 
    }
    cout<<endl;

    //rest funtions are same as vector
    //begin, end, rbegin, rend, insert, size, swap


return 0;
}