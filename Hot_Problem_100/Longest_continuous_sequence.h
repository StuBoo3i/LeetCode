//
// Created by Frank on 2024/1/8.
//

#ifndef LEETCODE_LONGEST_CONTINUOUS_SEQUENCE_H
#define LEETCODE_LONGEST_CONTINUOUS_SEQUENCE_H
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> st = {};
        int length=1,MaxL=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(!st.insert(nums[i]).second){
                continue;
            }
            if(nums[i-1]+1==nums[i]){
                length++;
                MaxL = max(length,MaxL);
            }else{
                length = 1;
            }
        }
        return MaxL;
    }
};


#endif //LEETCODE_LONGEST_CONTINUOUS_SEQUENCE_H
