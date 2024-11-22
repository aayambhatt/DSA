#include<iostream>
using namespace std;


class Solution {
public:
    int firstUniqChar(string s) {
    int n = s.size();
    unordered_map<char,int> freq;

    //count frequency of each character
    for(char c : s){
        freq[c]++;
    }

    // find index of first non repeating character
    for(int i =0; i<n ; i++){
        if(freq[s[i]]==1){
            return i; // return index
        }
        
    }

    return -1;
        
    }
};


int main()
{
 return 0;
}