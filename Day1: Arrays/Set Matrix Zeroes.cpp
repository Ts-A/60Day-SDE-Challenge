#include <bits/stdc++.h> 

using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    bool is0R[n] = {};
    bool is0C[m] = {};
    
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(matrix[i][j] == 0)
            {
                is0R[i] = true;
                is0C[j] = true;
            }
        }
    }
    
    int k = -1;
    while(++k < n)
    {
        if(is0R[k])
        {
            for(int j = 0; j < m; ++j)
            {
                matrix[k][j] = 0;
            }
        }
    }
    
    k = -1;
    while(++k < m)
    {
        if(is0C[k])
        {
            for(int i = 0; i < n; ++i)
            {
                matrix[i][k] = 0;
            }
        }
    }
        
}
