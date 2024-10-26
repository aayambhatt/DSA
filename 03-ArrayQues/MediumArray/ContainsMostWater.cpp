#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
    int max_area = 0;
    int n = height.size();
    int left = 0;
    int right = n-1;

    while(left<right){
        // Calculate the width and the minimum height between left and right
        int width = right - left;
        int minHeight = min(height[left], height[right]);
        int current_area = width * minHeight;

        // Update max_area if the current area is larger
        max_area = max(max_area, current_area);

         //Move the pointer that points to the smaller height
         if(height[left]<height[right]){
            left++;
         }
         else{
            right--;
         }
    }    

     return max_area;    

    
    }
};

int main()
{
 return 0;
}