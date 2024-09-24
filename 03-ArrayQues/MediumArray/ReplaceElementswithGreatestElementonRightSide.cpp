#include<iostream>
#include <vector>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    int n = arr.size();
    int max_from_right = -1; // Initialize the rightmost element as -1
    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--) {
        int current = arr[i]; // Store the current element
        arr[i] = max_from_right; // Replace current element with max_from_right
        if (current > max_from_right) {
            max_from_right = current; // Update max_from_right if current is greater
        }
    }
    return arr; // Return the modified array
}


int main()
{
 return 0;
}