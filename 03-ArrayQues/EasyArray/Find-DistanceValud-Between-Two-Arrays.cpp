#include<iostream>
using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int distanceValue = 0;
        int n = arr1.size();
        int m = arr2.size();

        for(int i = 0; i<n; i++){
            int count = 0;
            int a = arr1[i];

            for(int j =0; j<m; j++){
                int b = arr2[j];

                if(abs(a-b)<=d){
                    break;
                }
                else{
                    count++;
                }

            }

            if(count == m){
                distanceValue++;
            }

        }
        return distanceValue;
        
    }
};




int main()
{
 return 0;
}