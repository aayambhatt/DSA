#include<iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr, int n){
    int i=0;
    for(int j=1; j<n; j++){
        // If the current element is different from the last unique element
        if(arr[i]!=arr[j]){
            // Move the pointer and overwrite the next unique position
            arr[i+1]= arr[j];
            i++;
        }
    }
    return i+1;  // i + 1 gives the number of unique elements

}


int main()
{
 return 0;
}