#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 1;
        int high = n-2;

        if(n==1){
            return nums[0];
        }
        // as we trim down the array, check for these two cases
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[n-1]!=nums[n-2]){
            return nums[n-1];
        }

        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]!=nums[mid+1] && nums[mid]!= nums[mid-1]){
                return nums[mid];
            }

            //we are on left 
            if((mid%2==1 && nums[mid-1]==nums[mid]) || (mid%2==0 && nums[mid]==nums[mid+1])){
                low = mid+1;
            }
            // we are on right side 
            else{
                high = mid-1;
            }

        }

        return -1;

    }
};


int main()
{
 return 0;
}