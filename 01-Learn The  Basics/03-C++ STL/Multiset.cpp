#include<iostream>
#include <set>
using namespace std;

void explainMultiset(){
    
multiset<int> ms;

ms.insert(1); // {1}
ms.insert(1); // {1, 1}
ms.insert(1); // {1,1,1}
ms.insert(1); // {1,1,1,1}

ms.erase(1); // all 1's erased 

// only delete a single 1 
ms.erase(ms.find(1));

// rest functions are same as of set


}

int main()
{
 return 0;
}