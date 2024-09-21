#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) {
            return;
        }

        k = k % n;  
        if (k == 0) return;  

        // Save the last k elements in a temporary array
        vector<int> temp(k);
        for (int i = n - k; i < n; i++) {
            temp[i - (n - k)] = nums[i];
        }

        // Shift the remaining elements to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];  
        }

        // Copy the saved elements back to the beginning
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};




int main()
{
 return 0;
}