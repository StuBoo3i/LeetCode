//
// Created by Frank on 2024/1/8.
//

#ifndef LEETCODE_SUBARRAY_WITH_K_AS_THE_SUM_H
#define LEETCODE_SUBARRAY_WITH_K_AS_THE_SUM_H
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int n = nums.size();
        unordered_map<int, int> mp;
        int pre = 0;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            pre+=nums[i];
            if(mp.find(pre-k) != mp.end()){
                count += mp[pre - k];
            }
            mp[pre]++;
        }
        return count;
    }
};


#endif //LEETCODE_SUBARRAY_WITH_K_AS_THE_SUM_H
