#include<iostream>
#include <vector>

using namespace std;

void explainVectors(){
     vector<int> v;
     v.push_back(1); 
     v.emplace_back(2); // dynamically increases its size, faster than push back

     vector<pair<int, int>> vec;
     vec.push_back({1,2});
     vec.emplace_back(1,2);

     vector <int> v(5,100); // This constructor initializes the vector with 5 elements, each of which is set to the value 100.
     
     vector <int> v (5);

     // access elements in vector
     cout << v[2];

     // another way through iterators, points to the memory where the element is lying 
     vector<int>::iterator it = v.begin(); // points at memory
      it++;
      cout << *(it) << " "; // add * to access the value at that memory  

      it = it+2; // shifted by two positions 
      cout << *(it);

      // end will not point at last element, rather it will point right after that, so we have to do it-- to access the last element

     // printing the vector
      for(vector<int>::iterator it = v.begin(); it != v.end() ; it++){
          cout << *(it);

      }

      // to reduce it a little, we use auto 
     for(auto it=v.begin() ; it!=v.end(); it++){
          cout << *(it);

     }
     //foreach loop 
     for(auto it : v){
          cout << it;
     }

     // deletion in a vector 
     // {10,20,12,23}
     v.erase(v.begin()+1); // 20 is deleted 

     // { 10,20,12,23,35}
     v.erase(v.begin()+2, v.begin()+4); // {10,20,35} [start, end)

     //insert function 
     vector<int> v (2,100); // {100,100}
     v.insert(v.begin(), 300); // {300,100,100}
     v.insert(v.begin()+1, 2, 10); // {300, 10, 10, 100,100}

     // size 
     cout << v.size();

     // pop back
     v.pop_back(); // pops out the last element

     


}

int main()
{
 return 0;
}