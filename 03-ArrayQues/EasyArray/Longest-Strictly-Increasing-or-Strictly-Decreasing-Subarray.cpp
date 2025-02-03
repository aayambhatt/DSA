#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxLen = 1; // Maximum length found so far
        int incLen = 1; // Current increasing sequence length
        int decLen = 1; // Current decreasing sequence length

        for(int i = 1 ; i<nums.size() ; i++){
             // Current number is greater than previous
            if(nums[i]>nums[i-1]){
                 // Extend increasing sequence
                incLen++;
                // Reset decreasing sequence
                decLen = 1;
            }
             // Current number is less than previous
            else if(nums[i]<nums[i-1]){
                // Extend decreasing sequence
                decLen++;
                // Reset increasing sequence
                incLen = 1;
            }
            else{
                // Numbers are equal - reset both sequences
                incLen = 1;
                decLen = 1;
            }
             // Update maximum length found
            maxLen = max(maxLen, max(incLen, decLen));
        }
        
        return maxLen;
    }
};


int main()
{
 return 0;
}