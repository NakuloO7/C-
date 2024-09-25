#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int>ms;
    //elements always in sorted order
    //can contain duplicates

    ms.insert(1);  //{1}
    ms.insert(1);  //{1,1}
    ms.insert(2);  //{1,1,2}

    for(auto i:ms){
        cout<<i<<" ";
    }cout<<endl;

    ms.erase(1); //removes all 1's

    ms.erase(ms.find(1)); //removes first occ of 1

    // ms.erase(ms.find(1), ms.find(1)+2);
    //it will erase two occ of 1

    int cnt = ms.count(1);
    cout<<cnt<<endl;



    //Unorered set
    unordered_set<int> us;
    //contains unique elements
    //stored in random order

return 0;
}