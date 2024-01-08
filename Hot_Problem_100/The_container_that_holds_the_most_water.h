//
// Created by Frank on 2024/1/8.
//

#ifndef LEETCODE_THE_CONTAINER_THAT_HOLDS_THE_MOST_WATER_H
#define LEETCODE_THE_CONTAINER_THAT_HOLDS_THE_MOST_WATER_H
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0,right = height.size()-1,maxArea = 0,minheight;
        while(left<right){
            minheight = min(height[left],height[right]);
            maxArea = max(maxArea,minheight*(right-left));
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
};


#endif //LEETCODE_THE_CONTAINER_THAT_HOLDS_THE_MOST_WATER_H
