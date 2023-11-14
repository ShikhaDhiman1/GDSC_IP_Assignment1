#include <iostream>
#include <climits>
#include <vector>
#include <string>
using namespace std;
class Solution {
    public:
        void reverseString(vector<char>& s) {
            for(int i = 0; i < s.size()/2; i++){
                swap(s[i], s[s.size()-i-1]);
            }
        }
};
int main(){
    cout<<int('A')<<" "<<int('a')<<endl;
    // cout<<int('1')<<endl;
    // string c = ""+1+"";
    cout<<char(1)<<endl;
    cout<<"\u0067\u0068"<<endl;
    string s = "Shikha";
    return 0;
}