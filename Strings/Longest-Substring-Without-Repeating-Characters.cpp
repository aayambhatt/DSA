#include<iostream>
using namespace std;

class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            vector<int> mpp(256, -1); // Step 1: Hash map to store last seen index
            int n = s.size();
            int l = 0, r = 0, max_len = 0; // Step 2: Initialize pointers and max_len
    
            while (r < n) { // Step 3: Expand r
                if (mpp[s[r]] != -1) { // Step 4: Check for previous occurrence
                    if (mpp[s[r]] >= l) {
                        l = mpp[s[r]] + 1; // Step 4.1: Move left pointer
                    }
                }
                int len = r - l + 1; // Step 5: Compute length of valid substring
                max_len = max(len, max_len); // Step 6: Update max length
    
                mpp[s[r]] = r; // Step 7: Update last seen index
                r++; // Step 8: Move right pointer
            }
    
            return max_len; // Step 9: Return the final result
        }
    };
    

int main()
{
 return 0;
}