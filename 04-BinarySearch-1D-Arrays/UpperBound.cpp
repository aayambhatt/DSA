#include<iostream>
#include <vector>
using namespace std;

int upperBound(vector<int> &arr, int target) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = n;  // Default to n if no element is greater than target

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}


int main()
{
 return 0;
}