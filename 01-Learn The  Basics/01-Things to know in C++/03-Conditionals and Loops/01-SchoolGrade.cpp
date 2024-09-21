#include <iostream>
using namespace std;

int main(){

int marks;
cin>>marks;

if(marks<25){
    cout<< "F";
}

else if(marks>=25 && marks<=44)
{
    cout<<"E";
}

else if(marks>=45 && marks<=50)
{
    cout<<"D";
}

else if(marks>=51 && marks<=100){
    cout<<"A";
}


    return 0;
}

