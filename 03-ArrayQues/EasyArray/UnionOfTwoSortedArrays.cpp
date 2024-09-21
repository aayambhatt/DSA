#include <bits/stdc++.h>
#include<iostream>
#include <set>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m){

    set<int> st;
    for(int i =0; i<n ; i++){
        st.insert(arr1[i]);
    }

    for(int i=0; i<m; i++){
        st.insert(arr2[i]);
    }

     // Transfer the set elements to a vector 
    vector<int> Union;
    for(auto &it : st){
        Union.push_back(it);
    }

    return Union;


}




int main()
{
 return 0;
}