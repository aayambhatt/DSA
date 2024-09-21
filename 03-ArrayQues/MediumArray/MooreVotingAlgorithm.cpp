#include<iostream>
#include <vector>
using namespace std;

int mooreVoting(vector<int> &nums){
    int count=0;
    int el;
    // first: find the potential candidate for majority element
    for(int i =0; i<nums.size(); i++){
        if(count==0){
            count=1;
            el=nums[i];
        }
        else if(nums[i]==el){
            count++;
        }
        else{
            count--;
        }

    }

    // second: verify if candidate is actually the majority element 
    int cnt1=0;
    for(int i =0; i<nums.size(); i++){
        if(nums[i]==el){
            cnt1++;
        }
    }

    // check if candidate is majority element 
    if(cnt1>(nums.size()/2)){
        return el;
    }

    return -1; // no majority element was found



}




int main()
{
 return 0;
}