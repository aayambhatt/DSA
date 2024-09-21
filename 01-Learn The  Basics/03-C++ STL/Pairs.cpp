#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void explainPairs(){
    //A structure that holds two values of possibly different types.
    
    pair<int, int> p;
    p.first =3; // assigns the value 3 to the first memeber of the pair
    p.second =4;
    cout << p.first << " " << p.second << endl;  // Added endl for better readability

    pair<int, pair<int , int>> k = {1,{3,4}};
    cout << k.first << " " << k.second.first << " " << k.second.second << endl;  

    pair<int, int> arr[] = { {1,2}, {3,4}, { 5,6} };
    cout << arr[1].second;
}

int main() {
    explainPairs();
    return 0;
}
