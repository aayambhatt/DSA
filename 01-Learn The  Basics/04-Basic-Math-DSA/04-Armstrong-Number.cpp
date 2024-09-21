#include <cmath> 
#include <iostream>

bool checkArmstrong(int n) {
    int originalNumber = n;
    int sum = 0;
    int numberOfDigits = 0;
    

    int temp = n;
    while (temp > 0) {
        temp /= 10;
        numberOfDigits++;
    }
    

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, numberOfDigits);
        temp /= 10;
    }
    

    return (originalNumber == sum);
}
