#include<iostream>
using namespace std;

// pass by reference, means when we dont want to pass the copy, we add "&", it means it takes the address
void doSomething(string &s){
  s[0] = 't';
  cout << s << endl;
}

int main()
{
    string s = "raj";
    doSomething(s);
    cout << s << endl;

 return 0;
}