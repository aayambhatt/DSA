#include<iostream>
using namespace std;

bool isAnagram(string s, string t){

        if(s.length()!=t.length()){
            return false;
        }

        unordered_map<char, int> charCount;
        for(auto c : s){
            charCount[c]++;
        }

        for(auto c : t){
            if(charCount.find(c)==charCount.end() || charCount[c]==0){
                return false;
            }
            charCount[c]--;
        }

        return true;

}


int main()
{
 return 0;
}