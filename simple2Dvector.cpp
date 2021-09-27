#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n = 2;
    int value;
    vector<vector<int>> v(n);

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
        cin>>value;
        v[i].push_back(value);
        }
    }

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        cout << v[i][j] << " ";
        cout << endl;
    }

    
  return 0;
}