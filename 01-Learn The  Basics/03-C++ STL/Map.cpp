#include<iostream>
#include <map>
using namespace std;

void explainMap(){
        // An associative container that stores elements as key-value pairs, sorted by keys.
        // map stores unique keys in sorted order 

    map<int, int> mpp; // key, value
    map<int, pair<int,int>> mpp; // key is integer, value is two integer
    map< pair<int, int>, int> mpp; // key is two integer, value is one integer

    mpp[1] =2; // on the key 1, store 2

    mpp.insert({3,1}); // 3 is the key, 1 is the value


    // mpp[{2,4}] = 10; 

    for( auto it : mpp){
        cout << it.first << " " << it.second << endl; // everything is sorted order of key


    }
    
    // find address of the key, where it lies 
    auto it = mpp.find(3); // find(): Searches for a key and returns an iterator.
    // cout << *(it).second; 



}

int main()
{
 return 0;
}