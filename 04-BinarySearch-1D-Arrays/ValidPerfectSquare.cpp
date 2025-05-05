#include<iostream>
using namespace std;

class Solution {
    public:
        bool isPerfectSquare(int num) {
            int left = 0;
            int right = num;
    
            while(left<=right){
                int mid = left + (right-left)/2;
    
                long long square = 1LL * mid * mid;
                if(square == num){
                    return true;
                }
                else if(square<num){
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }
                
            }
    
            return false;
        }
    };

int main()
{
 return 0;
}