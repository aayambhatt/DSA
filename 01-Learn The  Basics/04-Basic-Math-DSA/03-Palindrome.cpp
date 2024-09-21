#include <climits>
#include <limits.h>


class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revNum = 0;
        int duplicate = x;
        int ld;

        while(x>0){
            ld = x%10;
             if (revNum > (INT_MAX - ld) / 10) {
                return false; 
            }
            revNum = revNum*10+ld;
            x=x/10;
        }
            if(duplicate == revNum){
                return true;
            }
            else{
                return false;
            }
    }     
};