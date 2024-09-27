#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
         int n = nums.size();
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = (low+high)/2;
                        
            if (nums[mid] == target) {
                return true;
            }

            if(nums[low]==nums[mid]&& nums[mid]==nums[high]){
                low=low+1;
                high = high-1;
                continue;
            }

            // Check if left half is sorted
            if (nums[low] <= nums[mid]) {
                // Target is in the sorted left half
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } 
            // Otherwise, the right half must be sorted
            else {
                // Target is in the sorted right half
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return false;  // Target not found
        
    }
};

int main()
{
 return 0;
}