#include<iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int largestConsecutive(vector<int> &nums){
    int n = nums.size();
    int longest =1;
    //make an unordered set
    unordered_set<int> st;

    //edge case when its empty
    if(n==0){
        return 0;
    }
    //put all elements in set
    for(int i =0; i<n ;i++){
        st.insert(nums[i]);
    }

    //iterate in the set
    for(auto it : st){
        // Check if it's the beginning of a sequence
        if(st.find(it-1)==st.end()){
            int count = 1;
            int x = it;
        
        //check for next consecutive number
        while(st.find(x+1)!=st.end()){
            x = x+1;
            count = count +1;
        }
        

        //update the longest 
        longest = max(longest, count);
        }
    }

    return longest;

}


int main()
{
 return 0;
}