#include<iostream>
#include <vector>
using namespace std;

vector<int> findIntersection(int arr1[], int arr2[], int n, int m){

int i =0;
int j=0;
vector<int> ans;

 while(i<n && j<m){
    if(arr1[i]<arr2[j]){
        i++;
    }

    else if(arr2[j]<arr1[i]){
        j++;
    }

    else{
        ans.push_back(arr1[i]);
        i++;
        j++;
    }

 }
return ans;

}






int main()
{
 return 0;
}