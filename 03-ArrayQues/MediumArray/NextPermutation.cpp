#include<iostream>
#include <vector>
using namespace std;

void nextPermutation(vector<int> &nums){

    int n = nums.size();
    int index = -1;

    // finding the first decreasing element from right 
    for(int i =n-2; i>=0 ;i--){
        if(nums[i]<nums[i+1]){
            index=i;
            break;
        }
    }
    // if it the largest possible combination, then reverse the array
    if(index==-1){
        reverse(nums.begin(), nums.end());
        return;
    }
    // Find the smallest element larger than nums[index]
    for(int i = n-1; i>index ; i--){
        if(nums[i]>nums[index]){
            swap(nums[i],nums[index]);
            break;
        }
    }




}


int main()
{
 return 0;
}