//
// Created by Frank on 2024/1/8.
//

#ifndef LEETCODE_FIND_ALL_LETTER_ECTOPIC_WORDS_IN_THE_STRING_H
#define LEETCODE_FIND_ALL_LETTER_ECTOPIC_WORDS_IN_THE_STRING_H
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        int n=s.size();
        int m=p.size();
        if(n<m){
            return vector<int>();
        }

        vector<int> ans;
        vector<int> sc(26);
        vector<int> pc(26);
        for(int i=0;i<m;++i){
            ++sc[s[i]-'a'];
            ++pc[p[i]-'a'];
        }
        if(sc==pc){
            ans.emplace_back(0);
        }
        for(int i = 0;i<n-m;++i){
            --sc[s[i]-'a'];
            ++sc[s[i+m]-'a'];

            if(sc==pc){
                ans.emplace_back(i+1);
            }
        }
        return ans;
    }
};

#endif //LEETCODE_FIND_ALL_LETTER_ECTOPIC_WORDS_IN_THE_STRING_H
