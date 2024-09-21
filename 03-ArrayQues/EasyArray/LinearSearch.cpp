#include<iostream>
using namespace std;


int linearSearch(int arr[], int n, int target){

for(int i =0; i<n ; i++){
    if(arr[i]==target){
        return i; // Return the index if target is found
    }
}

    return -1;  // Return -1 if target is not found

}

int main()
{     




 return 0;
}