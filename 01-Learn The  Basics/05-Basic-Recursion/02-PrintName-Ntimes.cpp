#include<iostream>
using namespace std;

void nTimes(int n, string name){
    // base case 
    if(n<=0){
        return;
    }

    //print the name
    cout << name << endl;

    // recursive case
    nTimes(n-1, name);
 

}

int main()
{

int n;
cin>>n;

string name;
cin>>name;

nTimes(n, name);
return 0;

}
 