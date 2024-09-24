#include<iostream>
#include <vector>
using namespace std;

int kadaneAlgo(vector<int> &nums){
    int sum = 0;
    int maxi = INT_MIN;

    for(auto it : nums){
        sum = sum +it;
        maxi = max(sum, maxi);

        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}

// Initialization:

// sum: Keeps track of the current subarray sum. It starts at 0.
// maxi: Stores the maximum sum encountered so far. It is initialized to the smallest possible integer (INT_MIN).
// Iterating through the array:

// For each element it in the array:
// Add it to sum to extend the current subarray.
// Update maxi to store the maximum between the current sum and maxi.
// If sum becomes negative, reset sum to 0. This is because a negative sum would reduce the sum of any future subarray, so starting fresh is better.
// Return the result:

// After the loop, maxi contains the maximum sum of any contiguous subarray.
// Time Complexity:
// The algorithm runs in O(n) time, as it processes each element exactly once.









int main()
{
 return 0;
}