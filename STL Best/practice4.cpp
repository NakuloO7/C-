#include<bits/stdc++.h>
using namespace std;

void Vec(){

    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);
    v.push_back(8);
    v.push_back(6);

    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    //iterating the vector

    vector<int> :: iterator it;
    it = v.begin();
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;

    for(it = v.begin(); it!= v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    //vector of pairs

    vector<pair<int, int>> v1;

    v1.push_back({3, 4});
    v1.push_back({5, 6});
    v1.push_back({7, 8});
    v1.push_back({3, 1});

    for(auto it1 : v1){
        cout<<it1.first<<" "<<it1.second<<endl;
    }

    vector<int> vs(5);
    cout<<sizeof(vs);
    cout<<endl;

    vector<int> vr(5, 100);
    for(auto i : vr)
      cout<<i<<" ";

    cout<<endl;

    sort(v.begin(), v.end());
    for(auto g : v)
        cout<<g<<" ";

}


void pairs(){
    pair<int, int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;

    cout<<endl;

    pair<int, pair<int, int>>pp = {2, {11, 33}};
    cout<<pp.first<<" "<<pp.second.first<<" "<<pp.second.second<<endl;

    pair<int, int> arr[] = {{1,3}, {2, 4}, {3,5}, {4, 6}};
    // for(auto i :arr){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    // for(int i=0; i<4; i++){
    //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
    // }

    //make pair

    vector<pair<int, string>>vp;

    int arr1[] = {1,2,3,4};
    vector<string>vs = {"aaa", "bbb", "ccc", "ddd"};

    for(int i=0; i<vs.size(); i++){
        vp.push_back(make_pair(arr1[i], vs[i]));
    }

    for(auto i : vp){
        cout<<i.first<<" "<<i.second<<endl;
    }

    
}

void queues(){
    //FIFO
    queue<int>q;

    q.push(6);
    q.push(3);
    q.push(2);
    q.push(7);
    q.push(9);

    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;


    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

}

void stacks(){

    stack<int>st;

    st.push(8);
    st.push(3);
    st.push(5);
    st.push(6);
    st.push(1);

    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}

void deques(){

    deque<int> dp;
    dp.push_back(2);
    dp.push_back(7);
    dp.push_back(4);

    dp.push_front(3);
    dp.push_front(8);
    dp.push_front(9);

    deque<int> :: iterator it;

    for(it = dp.begin(); it!= dp.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<dp.front()<<endl;
    dp.pop_front();
    cout<<dp.front();
    cout<<endl;
    cout<<dp.back()<<endl;
    dp.pop_back();
    cout<<dp.back();


}

void priorityQ(){
    priority_queue<int>pq;  //maxheap

    pq.push(12);
    pq.push(89);
    pq.push(156);
    pq.push(39);
    pq.push(5);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    cout<<endl;
    cout<<endl;


    //minheap

    priority_queue<int, vector<int>, greater<int>>pm;

    pm.push(87);
    pm.push(32);
    pm.push(564);
    pm.push(12);
    pm.push(7);

    cout<<pm.top()<<endl;
    pm.pop();
    cout<<pm.top()<<endl;


}

void sets(){
    set<int> st;

    st.insert(45);
    st.insert(56);
    st.insert(32);
    st.insert(11);
    st.insert(16);
    st.insert(24);

    for(auto i : st){
        cout<<i<<" ";
    }
    cout<<endl;

    //we can erase a particular element in the set
    auto i1 = st.find(11);
    auto i2 = st.find(32);

    st.erase(i1, i2);  //this will erase the elements from i1 till i2

    for(auto i : st){
        cout<<i<<" ";
    }
    cout<<endl;
}

void multisets(){
    //stores duplicate element in inc order
    multiset<int> mt;

    mt.insert(23);
    mt.insert(23);
    mt.insert(43);
    mt.insert(32);
    mt.insert(76);
    mt.insert(33);

    for(auto i : mt)
    cout<<i<<" ";

    cout<<endl;

    // mt.erase(23);  //this will remove all occ
    mt.erase(mt.find(23));  //removes single occ
    for(auto i : mt)
    cout<<i<<" ";

}

void maps(){
    //stores key value pair

    map<int, int> mp;
    //stores unique keys 
    //values are in sorted order of keys
    mp[1] = 1001;

    cout<<mp[1]<<endl;

    mp.insert({2, 2002});
    mp.insert({3, 3003});
    mp.insert({4, 4004});
    mp.insert({5, 2002});

    for(auto i : mp)
    cout<<i.first<<" -> "<<i.second<<endl;


    //nesting

    map<int, pair<int, int>> m;
    

    m.insert({1, {11, 1111}});
    m.insert({2, {22, 2222}});
    m.insert({3, {33, 3333}});

    for(auto it: m)
    cout<<it.first<<" -> "<<it.second.first<<" "<<it.second.second<<endl;

    cout<<endl;
    cout<<endl;


    //multimap

    multimap<int, int>num;
    //can contain duplicate keys

    num.insert({1, 23});
    num.insert({2, 23});
    num.insert({1, 23});

    for(auto ii : num)
    cout<<ii.first<<" "<<ii.second<<endl;


}

int main(){

    // Vec();
    // pairs();
    // queues();
    // stacks();
    // deques();
    // priorityQ();
    // sets();
    // multisets();
    maps();

return 0;
}