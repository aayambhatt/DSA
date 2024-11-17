#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int n = cardPoints.size();
        int lsum = 0, rsum = 0, maxSum = 0;
        int rIndex = n - 1;

        // Calculate the initial left sum (lsum)
        for (int i = 0; i < k; i++) {
            lsum = lsum+ cardPoints[i];
        }

        // Initialize maxSum with lsum
        maxSum = lsum;

        // Adjust lsum and calculate rsum
        for (int i = k - 1; i >= 0; i--) {
            lsum = lsum - cardPoints[i];        // Subtract the current leftmost card
            rsum = rsum+ cardPoints[rIndex];  // Add the current rightmost card
            rIndex--;                    // Move rIndex to the left
            maxSum = max(maxSum, lsum + rsum); // Update maxSum with the current sum
        }

        return maxSum;
    }

        
    
};


int main()
{
 return 0;
}