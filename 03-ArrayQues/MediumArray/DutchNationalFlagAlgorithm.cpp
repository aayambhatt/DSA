#include<iostream>
#include <vector>
using namespace std;

void dutchNationalFlag(vector<int> &nums){
    int low= 0;
    int mid =0;
    int high = nums.size()-1;
while (mid <= high) {
        switch (nums[mid]) {
            case 0:
                swap(nums[low], nums[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid], nums[high]);
                high--;
                break;
        }
    }
}

// working : 
// Initialization:
// Three pointers are used:

// low: Points to the position where the next 0 should go.
// mid: Traverses the array to inspect each element.
// high: Points to the position where the next 2 should go.
// Processing elements:

// The algorithm processes elements by inspecting nums[mid].
// If nums[mid] == 0, it swaps nums[low] and nums[mid], then increments both low and mid.
// If nums[mid] == 1, mid is incremented (since 1 is in the right place).
// If nums[mid] == 2, it swaps nums[mid] with nums[high], and decrements high (but doesn't increment mid because the swapped element at mid still needs to be processed).
// Termination:
// The loop runs until mid > high, ensuring all elements are sorted into three groups: 0s, 1s, and 2s.


int main()
{
 return 0;
}