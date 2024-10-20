#include<iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n;
        // If n is negative, we make it positive for the calculation
        if (nn < 0) {
            nn = -nn;
        }

        // While there are still powers to calculate
        while (nn > 0) {
            // If nn is odd, multiply the result by x
            if (nn % 2 != 0) {
                ans = ans * x;
                nn = nn - 1;
            } 
            // Otherwise, square x and halve nn
            else {
                x = x * x;
                nn = nn / 2;
            }
        }

        // If the original n was negative, invert the result
        if (n < 0) {
            ans = 1.0 / ans;
        }

        return ans;
    }
};


int main()
{
 return 0;
}