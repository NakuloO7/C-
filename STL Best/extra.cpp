#include<bits/stdc++.h>
using namespace std;
//Importand Algorithms

int main(){ 
    string s = "213";
    sort(s.begin(), s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));

    

    int arr[] = {4,6,17,8,9};
    int maxi = *max_element(arr, arr+5);
    cout<<maxi<<endl;

return 0;
}