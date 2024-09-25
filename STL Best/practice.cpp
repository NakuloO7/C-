
#include<bits/stdc++.h>
using namespace std;
void pairs(){
    pair<int,int> p ={2,3};
    cout<<p.first<<" "<<p.second<<endl;

    //nesting in pair
    pair<int, pair<int, int>> pp ={5, {6,7}};
    cout<<pp.first<<" "<<pp.second.first<<" "<<pp.second.second<<endl;

    //array of pairs
    pair<int,int> arr[] = {{1,2}, {3,4}, {5,6}};

    cout<<arr[1].second<<endl;
}

void vectors(){
    vector<int>v;

    v.push_back(1);
    v.emplace_back(2);

    cout<<v[0]<<" "<<v[1]<<endl;


    vector<pair<int, int>>vp;
    vp.push_back({2,3});
    cout<<vp[0].second<<endl;

    vector<int> vs(5); //vector of size 5
    vector<int> vv(5, 100);  //vector of size 5 with all values 100
    for(auto i : vv){
        cout<<i<<" ";
    }
    cout<<endl;

    //copy vector
    vector<int> vvv(vv);
    for(auto i : vvv){
        cout<<i<<" ";
    }
    cout<<endl;


    //iterationg over vectors
    vector<int> iv = {34, 67, 554, 565, 34, 67};
    vector<int>::iterator it = iv.begin();
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;
    it = it + 2;
    cout<<*(it)<<endl;

    vector<int>:: iterator itt;
    for(itt = iv.begin(); itt!= iv.end(); itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;
    //.end() points to the memory location that is right after the last element
    //v.rend() and v.rbegin() if we do it++ it will move in reverse
    
    cout<<iv.back()<<endl; //prints the last element of the vector

    //deletion in vector
    vector<int> er={1,2,3,4,5,6};

    er.erase(er.begin() + 1);
    for(auto it : er){
        cout<<it<<" ";
    }
    cout<<endl;

    er.erase(er.begin() + 2, er.begin() + 5);
    for(auto it : er){
        cout<<it<<" ";
    }
    cout<<endl;

    // /insert function 
    vector<int> ins(2, 100); 
    ins.insert(ins.begin(), 300);
    for(auto it : ins){
        cout<<it<<" ";
    }
    cout<<endl;

    ins.insert(ins.begin() + 1, 2, 200);  //this will insert two Occurences fo 200 after the first element
    for(auto it : ins){
        cout<<it<<" ";
    }
    cout<<endl;
}

void lists(){
    list<int>ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);


    ls.push_front(0);//in vector we cannot use it
    //doubly linked list is used so front is better instead of insert in vector

    for(auto it : ls){
        cout<<it<<" ";
    }
    cout<<endl;
}

void dequeues(){
    deque<int>dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(0);

    dq.pop_back();

    for(auto it : dq){
        cout<<it<<" ";
    }

}


void stacks(){
    //LIFO
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    cout<<st.empty()<<endl;

    stack<int>st2;
    st2.push(6);
    st2.push(7);
    st2.push(8);
    st.swap(st2);

    cout<<st2.top()<<endl;
    cout<<st.top()<<endl;

    //we cannot iterate over the stack
}

void queues(){
    //FIFO
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.back() += 9;

    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;

}

void priority_queues(){
    priority_queue<int>pq;  //Max Heap

    pq.push(1);
    pq.push(9);
    pq.push(6);
    pq.emplace(7);

    cout<<pq.top()<<endl; //greater element will always be at the top
    pq.pop();
    cout<<pq.top()<<endl; //greater element will always be at the top

    priority_queue<int, vector<int>, greater<int>>pp;  //Min Heap
    pp.push(9);
    pp.push(2);
    pp.push(4);

    cout<<pp.top()<<endl; //smaller element at the top
    pp.pop();
    cout<<pp.top()<<endl;
}

void sets(){
    set<int>st;  //sorted order and unique

    st.insert(3);
    st.insert(8);
    st.insert(2);
    st.insert(9);
    st.insert(3);


    for(auto it : st){
        cout<<it<<" ";
    }
    cout<<endl;
    auto itt = st.find(3);  //returns the address of elment 3
    auto ittt = st.find(6);  //if the element is not prsent it will return the address after the last element .end();

    st.count(3);  //exists = 1 or 0

    // st.erase(9);

    // auto it = st.find(8);
    // st.erase(it);


    auto it1 = st.find(3);
    auto it2 = st.find(8);
    st.erase(it1, it2);

    for(auto it3 : st){
        cout<<it3<<" ";
    }
    cout<<endl;

    //lower_bound and upper_bound remaining
    
}

void multisets(){
    multiset<int>ms;  //sorted but not unique
    ms.insert(3);
    ms.insert(8);
    ms.insert(8);
    ms.insert(4);
    ms.insert(9);

    for(auto it : ms){
        cout<<it<<" ";
    }
    cout<<endl;

    // ms.erase(1);  //every occ is erased

    //to erase only single occ

    ms.erase(ms.find(8));

    // ms.erase(ms.find(8), ms.find(8)+2);
    for(auto it1 : ms)
    cout<<it1<<" ";
    cout<<endl;


    unordered_set<int>us;
    //similar to the set
    //contains unique elements
    //but stored in randomised order


}

void maps(){
    map<int, int> mp;
    //keys are unique and the values can be duplicate
    //unique keys are always in sorted order

    mp[1] = 234;
    cout<<mp[1]<<endl;  //234

    mp.insert({2,476});
    cout<<mp[2]<<endl;

    mp.insert({4,555});
    mp.insert({3,235});
    mp.insert({6,765});

    for(auto i : mp){
        cout<<i.first<<"->"<<i.second<<endl;
    }

    // auto it = mp.find(3);
    // cout<<*(it).second<<endl;

    auto it = mp.find(8); // if not present points to the end
    cout<<endl;
    cout<<endl;

    map<int, pair<int, int>>m;
    m[34] = {333, 444};
    cout<<m[34].first<<" "<<m[34].second<<endl;
    

    m.insert({35, {666, 777}});
    m.insert({36, {111, 222}});
    m.insert({37, {333, 444}});

    for(auto i : m){
        cout<<i.first<<"->"<<i.second.first<<" "<<i.second.second<<endl;
    }


    map<pair<int,int>, int>mm;
    mm[{5,6}] = 456;
    cout<<mm[{5,6}]<<endl;

    mm.insert({{2,4}, 777});
    for(auto i : mm)
    cout<<i.first.first<<i.first.second<<"->"<<i.second<<endl;


    multimap<int, int>mt;
    //duplicate keys but all in sorted order

    unordered_map<int, int>um;
    //unique keys but randomised order

}

//Algorithms

void algorithms(){
    int arr[] = {5,3,2,6};
    int n = 4; //size of array
    sort(arr, arr+n);
    // for vector :- sort(v.begin(), v.end());

    sort(arr+2, arr+4); //customised sorting

    // sort(arr, arr+n, greater<int>);  //sort in descending order

    string s = "123";

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(arr, arr+n);
    cout<<maxi<<endl;
}

int main(){
    // pairs();
    // vectors();
    // lists();
    // dequeues();
    // stacks();
    // queues();
    // priority_queues();
    // sets();
    // multisets();
    // maps();
    algorithms();

return 0;
}