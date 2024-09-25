#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;

    m[10] = 1;

    cout<<m[10]<<endl;

    m.insert({20, 2});
    m.insert({30, 3});
    m.insert({40, 4});


    for(auto i : m)
    cout<<i.first<<" -> "<<i.second<<endl;

    cout<<endl;
    cout<<endl;
    cout<<endl;



    map<int, pair<int, int>>mp;

    mp[10] = {2, 3};
    cout<<mp[10].first<<" "<<mp[10].second<<endl;

    mp.insert({20, {2,3}});
    mp.insert({30, {4,5}});
    mp.insert({40, {6,7}});

    for(auto it : mp){
        cout<<it.first<<" -> "<<it.second.first<<" "<<it.second.second<<endl;
    }


    cout<<endl;
    cout<<endl;
    cout<<endl;

    map<pair<int, int>, int>mm;

    mm[{2,3}] = 20;
    cout<<mm[{2,3}]<<endl;

    mm.insert({{3,4}, 30});
    mm.insert({{4,5}, 40});
    mm.insert({{5,6}, 50});


    for(auto i : mm){
        cout<<i.first.first<<" "<<i.first.second<<" -> "<<i.second<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;



    int arr[5] = {1, 2, 4, 2, 1};

    map<int, int> mr;

    for(int i=0; i<5; i++){
        mr[arr[i]]++;
    }

    for(auto itt : mr){
        cout<<itt.first<<" "<<itt.second<<endl;
    }


return 0;
}