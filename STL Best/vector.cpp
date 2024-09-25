#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;  //declaration

    v.push_back(1);
    v.emplace_back(2);  //same as push_back

    vector<pair<int, int>> vec;  //vector of pairs

    vec.push_back({1,2});  
    cout<<vec[0].first<<endl; //1


    vector<int> v1(5);  //vector of size 5
    ///we can always increase the size of vector
    //simply push_back it will increase also if the size is already defined 

    vector<int>vv(5, 100);
    //vector of size 5 with each index containing 100
    
    vector<int> v2(vv);
    //copying all the elements of vector vv int v2

    //Acessing a particular element present at an index
    cout<<v2[1]<<"OR"<<v.at(1)<<endl;
    cout<<v.back()<<endl;  //the last element of the vector



    //Iterating over a vector

    vector<int>v3 = {3,4,5,6,7,9};

    vector<int> :: iterator it = v3.begin();
    it++;
    cout<<*(it)<<endl;  //4

    it+=2;
    cout<<*(it)<<endl;  //6


    // vector<int> ::iterator it = v3.end();
    // vector<int> ::iterator it = v3.rbegin();
    // vector<int> ::iterator it = v3.rend();





    //traversing the whole vector
    vector<int> :: iterator itt;
    for(itt = v3.begin(); itt != v3.end(); itt++){
        cout<<*(itt)<<" ";
    }cout<<endl;

    for(auto i = v3.begin(); i!= v3.end(); i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;

    for(auto j : v3){
        cout<<j<<" ";
    }cout<<endl;


    //Deletion in a vector
    cout<<"Deletion Code:-"<<endl;

    vector<int> ve = {10, 20, 12, 23};
    ve.erase(ve.begin()+1);
    for(auto k : ve){
        cout<<k<<" ";  //10 12 23
    }cout<<endl;

    //to delete multiple elements at one time
    ve.erase(ve.begin() + 1, ve.begin()+3);
    //this will delete all the elements for index 1to3
    for(auto k : ve){
        cout<<k<<" ";  //10 
    }cout<<endl;  



    //Insertion in vector
    cout<<"Inset Func code:-"<<endl;

    vector<int> ins = {3,4,5,8};
    ins.insert(ins.begin(), 2);
    for(auto i : ins){
        cout<<i<<" ";  //2 3 4 5 8 
    }cout<<endl;

    ins.insert(ins.begin() + 4, 2, 6);
    //this will insert 2 times 6 at index 4
    for(auto i : ins){
        cout<<i<<" ";  //2 3 4 5 6 6 8
    }cout<<endl;

    vector<int>copy = {1,2};
    ins.insert(ins.begin(), copy.begin(), copy.end());
    for(auto i : ins){
        cout<<i<<" ";  //1 2 2 3 4 5 6 6 8
    }cout<<endl;

return 0;
}