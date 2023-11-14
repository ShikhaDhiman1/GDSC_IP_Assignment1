#include <iostream>
#include <climits>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.length(); i++){
            if(int(s[i])>= 65 && int(s[i]) <= 90){
                // int x = int(s[i]);
                char c = char(int(s[i]) + 32);
                char temp = s[i];
                s[i] = c;
                c = s[i];
            }
        }
        return s;
    }
};