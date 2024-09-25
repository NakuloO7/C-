#include<bits/stdc++.h>
using namespace std;

void vectors(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    cout<<v1[0]<<endl;
    //itrerating over a vector
    for(auto i: v1){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>:: iterator it;
    it = v1.begin();
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;
    it = it + 2;
    cout<<*(it)<<endl;

    vector<int>:: iterator itr;
    for(itr = v1.begin(); itr != v1.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    for(auto i= v1.begin(); i!= v1.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;


    // vector of pairs
    vector<pair<int, int>>vp;
    vp.push_back({2,3});
    vp.push_back({5,6});
    vp.push_back({7,8});
    cout<<vp[1].second<<endl;


    vector<int>v2(5); //vector of size 5
    vector<int>v3(5, 100);
    cout<<v3[4]<<endl;

    //copy of vector
    vector<int>v4(v3);
    cout<<v4[3]<<endl;

    cout<<endl;
    //Deletion in vector

    vector<int>v5 = {1,2,3,4,5,6,7,8};
    cout<<v5[0]<<endl;
    v5.erase(v5.begin());
    cout<<v5[0]<<endl;
    //to delete multiple elements in vector
    v5.erase(v5.begin(), v5.begin() + 3);
    for(auto i : v5){
        cout<<i<<" ";
    }
    cout<<endl;
}

void pairs(){
    pair<int, int> p1 = {2,3};
    cout<<p1.first<<" "<<p1.second<<endl;
    

    //nesting of pairs
    pair<int, pair<int, int>>p2 = {1, {2,3}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    //pair of array
    pair<int, int>arr[] = {{11, 22}, {33, 44},{55, 66}};
    for(auto i : arr){
        cout<<i.first<<"->"<<i.second<<" ";
    }
    cout<<endl;

    for(int i=0; i<3; i++){
        cout<<arr[i].first<<"->"<<arr[i].second<<" ";
    }
    cout<<endl;

    //make pair

    vector<pair<int, string>>v;

    int arr1[] = {111, 222, 333, 444};

    vector<string>sv = {"Nakul", "Om", "Sai"};

    for(int i=0; i<sv.size(); i++){
        v.push_back(make_pair(arr1[i], sv[i]));
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    cout<<endl;
    //sorting in pair
    pair<int, int> p3[5] = {{3,4}, {4,5}, {6,7},{3,2}, {4, 9}};

    sort(p3, p3+5);

    for(int i=0; i<5; i++){
        cout<<p3[i].first<<" "<<p3[i].second<<endl;
    }

}

void queues(){
    //FIFO
    queue<int>q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);

    cout<<q1.back()<<endl;
    cout<<q1.front()<<endl;
    q1.pop();
    cout<<q1.front()<<endl;


    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }

}

void stacks(){
    //LIFO

    stack<int>st;

    st.push(34);
    st.push(24);
    st.push(44);
    st.push(64);
    st.push(84);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

void dequeues(){
    deque<int>dq;
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_front(1);
    dq.push_front(0);

    for(auto it : dq){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<dq.front()<<endl;
    dq.pop_front();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    dq.pop_back();
    cout<<dq.back()<<endl;
}

void priority_queues(){
    //maxheap
    priority_queue<int>pq;
    pq.push(34);
    pq.push(89);
    pq.push(45);
    pq.push(87);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    //minheap
    priority_queue<int, vector<int>, greater<int>>pm;
    pm.push(34);
    pm.push(89);
    pm.push(45);
    pm.push(87);

    cout<<pm.top()<<endl;
    pm.pop();
    cout<<pm.top()<<endl;
}

void sets(){
    set<int>st;

    st.insert(12);
    st.insert(32);
    st.insert(52);
    st.insert(12);
    st.insert(72);

    for(auto it: st){
        cout<<it<<" ";
    }cout<<endl;

    auto i1 = st.find(12);
    auto i2 = st.find(52);

    st.erase(i1, i2);
    for(auto it: st){
        cout<<it<<" ";
    }cout<<endl;

}


void multisets(){
    multiset<int>mst;
    mst.insert(12);
    mst.insert(32);
    mst.insert(52);
    mst.insert(12);
    mst.insert(72);

    for(auto i : mst)
    cout<<i<<" ";
    cout<<endl;

    // mst.erase(12);//this will erase all occs
    mst.erase(mst.find(12)); //this is erase only single occ

    for(auto i : mst)
    cout<<i<<" ";
    cout<<endl;
}

void maps(){
    map<int, int>mp;

    mp[3] = 3333;
    cout<<mp[3]<<endl; 

    mp.insert({4, 4444});
    mp.insert({5, 5555});
    mp.insert({6, 6666});
    mp.insert({7, 7777});

    for(auto i : mp)
    cout<<i.first<<"->"<<i.second<<endl;

    map<int, pair<int, int>>mpp;
    mpp[34] = {23, 43};
    cout<<mpp[34].first<<" "<<mpp[34].second<<endl;

    mpp.insert({37, {3555, 36666}});
    mpp.insert({36, {36664, 3444}});
    mpp.insert({35, {4322, 23424}});
    mpp.insert({39, {5567, 57699}});

    for(auto i: mpp)
    cout<<i.first<<"->"<<i.second.first<<" "<<i.second.second<<endl;
}

int main(){
    // vectors();
    // pairs();
    // queues();
    // stacks();
    // dequeues();
    // priority_queues();
    // sets();
    // multisets();
    maps();

return 0;
}