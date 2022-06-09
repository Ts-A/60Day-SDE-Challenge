#include <bits/stdc++.h> 

using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long int res = 0;
    if(n == 0) return res;
    
    long long int curr = arr[0];
    res = max(res, curr);
    
    for(int i = 1; i < n; ++i)
    {
        curr = max(curr + arr[i], (long long) arr[i]);
        res = max(res, curr);
        
    }
    
    return res;
}