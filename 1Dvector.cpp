#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for (auto &it : num) 
        cin >> it;
        
    for(auto it : num)
    cout << it << endl;
    
    return 0;
}