#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;
    //elements are always in sorted order
    //and stores unique elements
    st.insert(1);  //{1}
    st.insert(2);  //{1,2}
    st.insert(2);  //{1,2}
    st.insert(4);  //{1,2,4}
    st.emplace(3); //{1,2,3,4} 

    for(auto i:st){
        cout<<i<<" ";  //1 2 3 4
    }
    

    auto it = st.find(3);  //returns address of 3

    auto it = st.find(6);  //if not present returns address of st.end();

    st.erase(5); //removes 5

    auto it = st.find(3);
    st.erase(it);

    auto it1 = st.find(1);
    auto it2 = st.find(3);
    st.erase(it1, it2);



    st.count(1); //returns true of present

    // auto it = st.lower_bound(2);
    // auto it = st.upper_bound(3);
    //watch an video for details
    


return 0;
}