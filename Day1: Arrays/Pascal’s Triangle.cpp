#include <bits/stdc++.h> 

using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
   vector<vector<long long int>> v;
   
    v.push_back({1});
    
    for(int i = 1; i < n; ++i)
    {
        vector<long long int> temp;
        
        temp.push_back(1);
        
        long long int prev = v[i - 1][0];
        for(int j = 1; j < v[i - 1].size(); ++j)
        {
            temp.push_back(v[i - 1][j] + prev);
            prev = v[i - 1][j];
        }
        
        temp.push_back(1);
        
        v.push_back(temp);
    }    
    
    return v;
}
