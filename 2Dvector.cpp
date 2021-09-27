#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int in = 2;
    vector<vector<int> > num;
    int val;
    
    for(int i = 0; i < in; i++){
        vector<int> temp;
        for(int j = 0; j < in; j++){
            cin >> val;
            temp.push_back(val);
        }
    num.push_back(temp);
    temp.clear();
    }
    for(vector<int> vect : num){
        for(auto it : vect)
        cout << it << " ";
    cout << endl;
    }
    
    return 0;
}