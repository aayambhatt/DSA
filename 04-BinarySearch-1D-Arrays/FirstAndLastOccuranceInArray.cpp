#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int lowerBound(vector<int> &nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = -1;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return ans;
    }

    int upperBound(vector<int> &nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = -1;

        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>target){
                ans = mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }



    vector<int> searchRange(vector<int>& nums, int target) {
         int lb = lowerBound(nums, target);
        if (lb == -1 || nums[lb] != target) {
            return {-1, -1};  // Target not found
        }

        int ub = upperBound(nums, target);
        if (ub == -1) {
            ub = nums.size();  // If no element greater than target exists
        }

        return {lb, ub - 1};  // Return the range
        
    }
};


int main()
{
 return 0;
}