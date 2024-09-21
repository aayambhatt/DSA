#include <bits/stdc++.h> 
int countDigit(long long x) {
    // Write your code here.
    int cnt =0;
    while(x>0){
        int lastdigit = x%10; // not very significant
        cnt = cnt+1;
        x = x/10;
    }
    
    return cnt;
}