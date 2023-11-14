#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int breakp = -1; // break point
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                breakp = i;
                break;
            }
        }

        if (breakp == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int i = n - 1; i > breakp; i--) {
            if (nums[i] > nums[breakp]) {
                swap(nums[i], nums[breakp]);
                break;
            }
        }

        reverse(nums.begin() + breakp + 1, nums.end());

        return;
    }
};