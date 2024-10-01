#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        
        // Handle edge cases
        if (n == 1) return 0;  // Only one element, return index 0
        if (nums[0] > nums[1]) return 0;  // Peak at the first element
        if (nums[n-1] > nums[n-2]) return n-1;  // Peak at the last element

        // Binary search for peak in the middle
        int low = 1;
        int high = n - 2;

        while (low <= high) {
            int mid = (low + high) / 2;
            
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                return mid;  // Peak element found
            } else if (nums[mid] > nums[mid - 1]) {
                low = mid + 1;  // Move right if the right neighbor is greater
            } else {
                high = mid - 1;  // Move left if the left neighbor is greater
            }
        }
        return -1;  // This should never be reached
    }
};




int main()
{
 return 0;
}