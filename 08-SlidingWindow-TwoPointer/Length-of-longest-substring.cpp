#include<iostream>
#include<vector>
using namespace std;

int lengthOfLongestSubstring(string s){

    // A vector to store the last occurrence index of each character
    // Initialized to -1 to indicate no character has been encountered yet
    vector<int> mpp(256,-1);
    int l=0,r=0,max_len=0;
    int n = s.size();

    // Iterate through the string with the right pointer
    while(r<n){
        // if it is in the map and its index is within the current window
        if(mpp[s[r]]!=-1){
            if(mpp[s[r]]>=l){
             // Move the left pointer to just past the last occurrence of the repeated character
             l = mpp[s[r]]+1;
            }
        }

        // Calculate the current window length
        int len = r-l+1;

        //update the maximum length
        max_len = max(max_len, len);
        // Update the last occurrence index of the current character
        mpp[s[r]]=r;
        // move the right pointer forward to expand the window
        r++;

    }

    return max_len;

        





}




int main()
{
 return 0;
}