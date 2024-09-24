#include<iostream>
#include <vector>
using namespace std;


vector<int> leader(vector<int> arr){
    int n = arr.size();
    vector<int> ans; // to store the leaders
    int maxFromRight = arr[n-1]; // rightmost element will always be leader
    ans.push_back(maxFromRight); // so its included 

      // Traverse the array from the second last element to the first
    for(int i =n-2; i>=0 ;i--){
        if(arr[i] >= maxFromRight){
            ans.push_back(arr[i]);
            maxFromRight = arr[i]; //Update max_from_right to the new leader
        }
    }

    // Reverse the result because we are pushing leaders in reverse order
    reverse(ans.begin(), ans.end());
    
    return ans;




}



int main()
{
 return 0;
}