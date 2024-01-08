//
// Created by Frank on 2024/1/8.
//

#ifndef LEETCODE_LONGEST_SUBSTRING_WITHOUT_DUPLICATE_CHARACTERS_H
#define LEETCODE_LONGEST_SUBSTRING_WITHOUT_DUPLICATE_CHARACTERS_H
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        unordered_set<char> st;
        int rp = -1;
        if(n==0) return 0;
        for(int i=0;i<n;++i){
            if(i!=0){
                st.erase(s[i-1]);
            }
            while(rp+1<n&&!st.count(s[rp+1])){
                st.insert(s[rp+1]);
                ++rp;
            }
            ans = max(ans,rp-i+1);
        }
        return ans;
    }
};


#endif //LEETCODE_LONGEST_SUBSTRING_WITHOUT_DUPLICATE_CHARACTERS_H
