#include<iostream>
using namespace std;

class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            int n = nums.size();
            int left = 0;
            int minLen = INT_MAX;
            int sum = 0;
    
            for(int right = 0; right<n ; right++){
                sum = sum + nums[right];
    
                while(sum>=target){
                    minLen = min(minLen, right-left+1);
                    sum = sum-nums[left];
                    left++;
                }
            }
            if(minLen == INT_MAX){
                return 0;
            }
            else{
                return minLen;
            }
        }
    };

int main()
{
 return 0;
}