#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int beautySum2(string s){ 
    int res = 0; 
    for (int i = 0; i < s.size(); ++i) {

        int charCount[26] = {}; 
        int maxFrequency = 0; 
        int minFrequency = 0;  
        for (int j = i; j < s.size(); ++j) {
            int index = s[j] - 'a';
            charCount[index]++;
            maxFrequency = max(maxFrequency, charCount[index]);
            if (minFrequency >= charCount[index]-1) {
                minFrequency = charCount[index];
                for (int k = 0; k < 26; ++k) {
                    if (charCount[k] == 0) {
                        minFrequency = min(minFrequency, INT_MAX);
                    } else {
                        minFrequency = min(minFrequency, charCount[k]);
                    }
                }
            }
            res += maxFrequency - minFrequency;
        }
    }
    return res; 
}