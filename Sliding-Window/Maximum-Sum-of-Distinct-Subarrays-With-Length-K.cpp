#include <iostream>
#include <vector>
#include <unordered_set>
#include <climits>  // For LLONG_MIN

using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> duplicate;
        long long maxSum = LLONG_MIN; // Use LLONG_MIN to correctly track max sum
        long long windowSum = 0;
        int n = nums.size();
        int left = 0;

        for (int right = 0; right < n; right++) {
            // Remove duplicates by shrinking window from left
            while (duplicate.count(nums[right])) {
                duplicate.erase(nums[left]);
                windowSum -= nums[left];
                left++;
            }

            // Add current element
            duplicate.insert(nums[right]);
            windowSum += nums[right];

            // If window size is exactly k, update maxSum and slide window
            if (right - left + 1 == k) {
                maxSum = max(maxSum, windowSum);
                // Slide window forward
                duplicate.erase(nums[left]);
                windowSum -= nums[left];
                left++;
            }
        }

        // If no valid subarray was found, return 0
        return maxSum == LLONG_MIN ? 0 : maxSum;
    }
};

// Example Usage
int main() {
    Solution sol;
    vector<int> nums = {4, 3, 5, 1, 6, 2, 1, 3};
    int k = 3;
    cout << "Maximum distinct subarray sum of size " << k << ": " << sol.maximumSubarraySum(nums, k) << endl;
    return 0;
}
