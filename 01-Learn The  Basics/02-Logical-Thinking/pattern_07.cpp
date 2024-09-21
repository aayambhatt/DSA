#include<iostream>
using namespace std;

void print7(int n){

    for(int i =0; i<n ; i++){
        //space
        for(int j =0; j<n-i-1; j++){
            cout << " ";
        }
        //star
        for(int k = 0; k<2*i+1; k++){
            cout << "*";

        }
        //space 
        for(int h=0; h<n-i-1; h++){
            cout<<" ";
        }
            cout << endl;
    }


}

int main()
{
    int n;
    cin>>n;

    print7(n);


 return 0;
}