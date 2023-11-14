#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal) {
    bool flag = false;
    int n = s.length();
    for(int i = 0; i < n; i++){
            string x;
            x += s[n-1];
            s.pop_back();
            s.insert(0, x);
            if(s == goal){
                flag = true;
                break;
            }
    }
    return flag;
}