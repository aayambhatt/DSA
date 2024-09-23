#include<iostream>
#include <vector>
using namespace std;

vector<int> rerrangeArray(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n,0);
    int posi=0; //positive index
    int negi =1; //negative index

    for(int i =0; i<n; i++){
        //if element is negative
        if(nums[i]<0){
            ans[negi]=nums[i];
            negi = negi+2;
        }
        else{
            ans[posi]=nums[i];
            posi=posi+2;
        }
    }
        return ans;


}


int main()
{
 return 0;
}