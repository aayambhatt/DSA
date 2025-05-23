#include<iostream>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){

    int p1 = m-1;
    int p2 = n-1;
    int p = m+n-1;

    while(p1>=0 && p2>=0){
        if(nums1[p1]>nums2[p2]){
            nums1[p1] = nums1[p];
            p1--;
        }
        else{
            nums2[p2] = nums1[p];
            p2--;
        }
        p--;
    }
    while (p2 >= 0) {
        nums1[p] = nums2[p2];
        p2--;
        p--;
    }
    
}

int main()
{
 return 0;
}