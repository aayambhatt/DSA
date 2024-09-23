#include<iostream>
#include <vector>
using namespace std;

int stockBuySell(vector<int> &prices){
    //initialize profit as 0, as it will be zero
    int profit = 0;
    // minimum price will be first day's price 
    int mini = prices[0];
    int n = prices.size();

    //Loop through each day's price
    for(int i =0; i<n ; i++){
        //calculate potential profit 
        int cost = prices[i]-mini;

        // update maximum profit so far
        profit = max(profit, cost);

        //update minimum price so far
        mini = min(mini, prices[i]);
    }
        // return maximum profit found
        return profit;

}


int main()
{
 return 0;
}