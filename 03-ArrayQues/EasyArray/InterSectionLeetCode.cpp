#include<iostream>
#include <vector>
#include <set>
using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        for(int i =0; i<nums1.size(); i++){
            st.insert(nums1[i]);
        }

        // set for intersection
        set<int> resultSet;

        for(int i =0; i<nums2.size();i++){
             if(st.find(nums2[i]) != st.end()) {
            resultSet.insert(nums2[i]); // To ensure unique elements
        }
        }

        vector<int> result;
    for(auto &it : resultSet) {
        result.push_back(it);
    }

    return result;

    }
};




int main()
{
 return 0;
}