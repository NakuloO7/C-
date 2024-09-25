#include<bits/stdc++.h>
using namespace std;

void vectors(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);

    cout<<v[1]<<endl;



    vector<int> :: iterator it;
    // it = v.begin();
    // cout<<*(it)<<endl;
    // it++;
    // cout<<*(it)<<endl;

    for(it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto i: v){
        cout<<i<<" ";
    }cout<<endl;


    //vector of pairs

    vector<pair<int, int>>vp;

    vp.push_back({5,6});
    vp.push_back({7,8});
    vp.push_back({2,3});
    vp.push_back({10, 11});

    cout<<vp[0].second<<endl;
    cout<<vp[1].first<<endl;

    for(auto itt : vp){
        cout<<itt.first<<" "<<itt.second<<endl;
    }
    cout<<endl;


    vector<int>ve(5);
    // cout<<sizeof(ve)<<endl;

    vector<int>vc(5, 100);
    for(auto it : vc)
    cout<<it<<" ";

    cout<<endl;


    vector<int>vb = {1,2,3,4,5,6,7,8,9};
    for(auto it : vb)
    cout<<it<<" ";

    cout<<endl;

    vb.erase(vb.begin());
    for(auto it : vb)
    cout<<it<<" ";

    cout<<endl;


    //to erase multiple items
    vb.erase(vb.begin(), vb.begin() + 4);
    for(auto it : vb)
    cout<<it<<" ";
    
    cout<<endl;

}

void pairs(){
    pair<int, int>p = {1,22};
    cout<<p.first<<" "<<p.second;
    cout<<endl;


    //nesting of pair
    pair<int, pair<int, int>>ps = {1001, {11, 33}};
    cout<<ps.first<<" -> "<<ps.second.first<<" "<<ps.second.second<<endl;

    cout<<endl;

    //pair of array
    pair<int, int>arr[] = {{1,22}, {1,44}, {1,66}, {1,11}};
    sort(arr, arr +4);
    for(int i=0; i<4; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }


    //make pair

    // vector<pair<int, string>>v4;

    // int arr[] = {1,2,3,4,5};
    // vector<string>vv = {"aa", "bb","cc", "dd", "ee"};

    // for(int i=0; i<vv.size(); i++){
    //     v4.push_back(make_pair(arr[i], vv[i]));
    // }

    // for(auto it : v4){
    //     cout<<it.first<<" "<<it.second<<" ";
    // }cout<<endl;
}


void queues(){

    //FIFO
    queue<int>q;
    q.push(6);
    q.push(9);
    q.push(3);
    q.push(2);


    // cout<<q.back()<<endl;  //2
    // cout<<q.front()<<endl;  //6
    // q.pop();
    // cout<<q.front()<<endl;  //9
    // cout<<q.back()<<endl;  //2

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}


void stacks(){
    stack<int>st;

    st.push(8);
    st.push(7);
    st.push(5);
    st.push(2);
    st.push(3);

    // cout<<st.top();
    // st.pop();
    // cout<<st.top();

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}


void dequeues(){
    deque<int>dq;
    dq.push_back(9);
    dq.push_back(8);
    dq.push_back(7);
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);



    deque<int> :: iterator it;
    for(it = dq.begin(); it!= dq.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    dq.pop_back();
    dq.pop_front();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
}

void priority_queues(){
    //maxheap

    priority_queue<int>pq;

    pq.push(11);
    pq.push(43);
    pq.push(33);
    pq.push(75);
    pq.push(87);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;



    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    // minheap

    priority_queue<int, vector<int>, greater<int>>pm;

    pm.push(11);
    pm.push(43);
    pm.push(33);
    pm.push(75);
    pm.push(87);

    // cout<<pm.top()<<endl;
    // pm.pop();
    // cout<<pm.top()<<endl;

    while(!pm.empty()){
        cout<<pm.top()<<" ";
        pm.pop();
    }
    cout<<endl;

    

}


void sets(){
    set<int>st;
    //unique elements in increasing order

    st.insert(23);
    st.insert(67);
    st.insert(23);
    st.insert(55);
    st.insert(53);

    for(auto i : st)
    cout<<i<<" ";

    cout<<endl;
    auto i1 = st.find(23);
    auto i2 = st.find(87);

    st.erase(i1, i2);

    for(auto it : st)
    cout<<it<<" ";
}

void multisets(){
    multiset<int>ms;

    //also stores duplicate elements in increasing order

    ms.insert(23);
    ms.insert(67);
    ms.insert(23);
    ms.insert(55);
    ms.insert(53);


    for(auto i : ms)
    cout<<i<<" ";

    cout<<endl;

    // ms.erase(23);  //will erase all occ
    ms.erase(ms.find(23));  //will erase single occ
    for(auto i : ms)
    cout<<i<<" ";

}


void maps(){
    map<int, int>m;

    m[10] = 1001;

    cout<<m[10]<<endl;

    m.insert({11,1111});
    m.insert({13,3333});
    m.insert({18,8888});
    m.insert({12,2222});

    for(auto i : m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    cout<<endl;


    map<int, pair<int, char>>mp;

    mp.insert({1,{11, 'a'}});
    mp.insert({0,{14, 'd'}});
    mp.insert({8,{15, 'c'}});
    mp.insert({3,{18, 'f'}});

    for(auto it : mp)
    cout<<it.first<<" -> "<<it.second.first<<" "<<it.second.second<<endl;

    cout<<endl;

    //multimap

    multimap<int, int>mm;  //duplicate keys

    mm.insert({1,23});
    mm.insert({1,23});
    mm.insert({2,44});

    for(auto im : mm)
    cout<<im.first<<" "<<im.second<<endl;
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