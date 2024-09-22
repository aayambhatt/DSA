#include<iostream>
#include <vector>
using namespace std;

int kadaneAlgo(vector<int> &nums){
    int sum = 0;
    int maxi = INT_MIN;

    for(auto it : nums){
        sum = sum +it;
        maxi = max(sum, maxi);

        if(sum<0){
            sum=0;
        }
    }
    return maxi;


}

int main()
{
 return 0;
}