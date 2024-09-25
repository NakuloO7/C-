#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);  //{1}
    q.push(2);  //{1,2}
    q.emplace(3); //{1,2,3}

    q.back() += 5;
    cout<<q.back()<<endl;  //8

    cout<<q.front()<<endl;  //1
    q.pop();
    cout<<q.front()<<endl;  //2
 
    //size and swap same as stack
return 0;
}