//
// Created by Frank on 2024/1/8.
//

#ifndef LEETCODE_GROUPING_OF_HETEROTOPIC_WORDS_H
#define LEETCODE_GROUPING_OF_HETEROTOPIC_WORDS_H
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string& str: strs){
            string key = str;
            sort(key.begin(),key.end());
            mp[key].emplace_back(str);
        }
        vector<vector<string>> ans;
        for(auto it = mp.begin();it != mp.end();++it){
            ans.emplace_back(it->second);
        }
        return ans;
    }
};

#endif //LEETCODE_GROUPING_OF_HETEROTOPIC_WORDS_H
