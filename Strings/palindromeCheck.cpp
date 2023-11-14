#include <iostream>
#include <climits>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    string str = "";
    for(int i = 0; i < s.size(); i++){
        if((s[i] >='a' && s[i] <='z') || (s[i] >='A' && s[i] <='Z')){
            str.push_back(tolower(s[i]));
        }
        else if(int(s[i]) >=48 && s[i] <= 57){
            str.push_back(s[i]);
        }
    }
    string rev_str = str;
    for(int i = 0; i< str.size()/2; i++){
        swap(rev_str[i], rev_str[str.size() - i - 1]);
    }
    if(str == rev_str) return true;
    else return false;
}