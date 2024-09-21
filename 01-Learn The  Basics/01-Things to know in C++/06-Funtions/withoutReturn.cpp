#include<iostream>
using namespace std;

void printSum(int num1, int num2){
    int num3 = num1+num2;
    cout<<num3;
}


int main()
{
    int num1, num2;
    cin>> num1 >> num2;

    printSum(num1,num2);


 return 0;
}