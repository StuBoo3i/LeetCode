//
// Created by Frank on 2024/1/8.
//

#ifndef LEETCODE_MOVE_ZERO_H
#define LEETCODE_MOVE_ZERO_H
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(),left = 0,right=0;
        while(right<n){
            if(nums[right]){
                swap(nums[left],nums[right]);
                left++;
            }
            right++;
        }
    }
};


#endif //LEETCODE_MOVE_ZERO_H
