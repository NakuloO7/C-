#include<bits/stdc++.h>
using namespace std;

int main(){
    //it is used if we want to store two values
    pair<int, int>p = {2,4};
    cout<<p.first<<" "<<p.second;
    cout<<endl;

    //now if we want to store more than two values nested pair can be used
    pair<int, pair<int, int>> pq ={1, {2,3}};
    cout<<pq.first<<" "<<pq.second.first<<" "<<pq.second.second;
    cout<<endl;


    //we can also make an array of pairs in it

    pair<int, int>arr[] = {{1,2}, {3,4}, {5,6}};
    //here each pair starts from index 0;
    cout<<arr[0].first<<endl;  //1
    cout<<arr[2].second<<endl; //6

    //Traversing through the pair
    for(int i = 0; i<3; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }


    //make_pair
    vector<pair<int, string>>v;

    int arr1[] = {111, 222, 333, 444};

    vector<string>sv = {"Nakul", "Om", "Sai"};

    for(int i=0; i<sv.size(); i++){
        v.push_back(make_pair(arr1[i], sv[i]));
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }


    //sorting the pair
    pair<int, int>ps[5];  //array of 5 pairs
    ps[0] = {1,2};
    ps[1] = {4,5};
    ps[2] = {3,7};
    ps[3] = {4,3};
    ps[4] = {9,8};
    
    sort(ps, ps+5); 
    
    for(int i=0; i<5; i++){
        cout<<ps[i].first<<" "<<ps[i].second<<" \n";
    }

return 0;
}