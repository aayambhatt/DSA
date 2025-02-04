#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        // Initialize max sum and current sum with first element
        int maxSum = nums[0];
        int currentSum = nums[0];
        
        // Iterate through array starting from second element
        for (int i = 1; i < nums.size(); i++) {
            // If current element is larger than previous, continue ascending subarray
            if (nums[i] > nums[i-1]) {
                currentSum += nums[i];
            } 
            // If ascending order breaks, start new subarray
            else {
                currentSum = nums[i];
            }
            
            // Update maximum sum if current sum is larger
            maxSum = max(maxSum, currentSum);
        }
        
        return maxSum;
    }
};



int main()
{
 return 0;
}