#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &nums){
    int cnt=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i-1]>nums[i]){
            cnt++;
        }
    }

    if(nums.size()-1>nums[0]){
        cnt++;
    }

    return cnt<=1;


}


int main(){
    return 0;
}