#include<iostream>
#include <vector>
using namespace std;

int findNumberThatAppearsOnce(vector<int> &nums){
    int result = 0;
    for(int num : nums){
        result = result^num;
    }

    return result;

}



int main()
{
 return 0;
}