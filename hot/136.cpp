#include "header.h"

//只出现一次的数字

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            ans ^= nums[i];
        }
        return ans;
    }
};