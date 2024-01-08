//
// Created by Frank on 2024/1/8.
//

#ifndef LEETCODE_SUM_OF_TWO_NUM_H
#define LEETCODE_SUM_OF_TWO_NUM_H
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};


#endif //LEETCODE_SUM_OF_TWO_NUM_H
