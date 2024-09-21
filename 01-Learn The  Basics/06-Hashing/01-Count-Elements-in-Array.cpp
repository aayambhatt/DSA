#include<iostream>
using namespace std;

int main()
{
 
// first take the array input
int n;
cin >> n;
int arr[n];

for(int i=0; i<n; i++){
    cin>>arr[i];
}

//precomputation
int hash[13] ={0}; // taking a simple case that max size will be 12

for(int i =0; i<n ; i++){
    hash[arr[i]] = hash[arr[i]] + 1;
}


int q;
cin>>q;

while(q--){
    int number;
    cin>>number;
// fetch 
cout << hash[number] << endl;

}
return 0;
}