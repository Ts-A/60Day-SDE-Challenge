#include <bits/stdc++.h> 

using namespace std;

int maximumProfit(vector<int> &prices){
    int sum = 0;
    int curr = prices[0];
    
    for(int i = 1; i < prices.size(); ++i)
    {
        sum = max(sum, prices[i] - curr);
        curr = min(curr, prices[i]);
    }
    
    return sum;
}