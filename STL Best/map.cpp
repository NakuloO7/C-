#include<bits/stdc++.h>
using namespace std;

int main(){
    //map<key_datatype, value_datatype>
    //keys are unique
    //values can be repeated
    //map stores unique keys in sorted order

    // map<int, int>m;
    // map<int, pair<int, int>> mp;
    // map<pair<int, int>, int>mpp;

    
    map<int, int>m;
    m[10] = 2;
    cout<<m[10]<<endl;  //2

    m.insert({2,4});  //here 2 is the key,and 4 is value
    cout<<m[2]<<endl;  //4

    m.insert({3,6});
    m.insert({4,8});

    for(auto it : m){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    // auto i = m.find(2);
    // cout<<*(i).second<<endl;  //returns value associated to the particular key

    auto it = m.find(6);//if not present points to end



    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;








    map<int, pair<int, int>> mp;
    mp[34] = {2,3};
    cout<<mp[34].first<<" "<<mp[34].second<<endl; //2 3
    mp.insert({23,{6,7}});
    cout<<mp[23].first<<" "<<mp[23].second<<endl;//6 7

    for(auto i : mp){
        cout<<i.first<<"->"<<i.second.first<<" "<<i.second.second<<endl;
    }



    map<pair<int, int>, int>mpp;
    mpp[{5,6}] = 1000;
    cout<<mpp[{5,6}]<<endl;  //1000
    mpp.insert({{34,56}, 900});
    cout<<mpp[{34,56}]<<endl; //900


   



return 0;
}