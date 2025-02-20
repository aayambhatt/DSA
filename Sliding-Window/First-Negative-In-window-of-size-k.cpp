#include<iostream>
using namespace std;


class Solution {
    public:
      vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
          // write code here
         vector<int> result;
          deque<int> Q;
          int i = 0, j = 0;
          
          while (j < arr.size()) {
              // Store negative elements in the deque
              if (arr[j] < 0) {
                  Q.push_back(arr[j]);
              }
              
              // Expand the window
              if (j - i + 1 < k) {
                  j++;
              }
              else if (j - i + 1 == k) {
                  // Store the first negative number in the result
                  if (Q.empty()) {
                      result.push_back(0);
                  } else {
                      result.push_back(Q.front());
                  }
                  
                  // Slide the window
                  if (!Q.empty() && arr[i] == Q.front()) {
                      Q.pop_front();
                  }
                  
                  // Move the window forward
                  i++;
                  j++;
              }
          }
      
          return result;
      }
          
  };

int main()
{
 return 0;
}