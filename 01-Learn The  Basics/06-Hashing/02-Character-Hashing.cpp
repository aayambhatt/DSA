#include<iostream>
using namespace std;
int main()
{
    // here we take the case where only lowercase letters are taken, hence we create our hash of size 26, so we needed to do that substraction thing. If not, we'd have taken the size 256 and it'd be mapped correctly. 
     string s;
     cin>>s; 


    //precompute
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

     int q;
     cin>>q;

    while(q--){
        char c;
        cin>>c;

        //fetch 
        cout<< hash[c-'a'] << endl;  // in order to get the index, its charatcer - 'a'

     }


 return 0;
}