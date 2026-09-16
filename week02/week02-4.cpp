// week02-4.cpp 學習計畫 Basic 第2題
// Leetcode 389. Find the Difference
// 給你兩個字串，右邊打亂後，多了1張，找出來
// 整理一下左邊 s 的字母，再讓右邊 t 用掉。不夠用時，找到答案
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[26] = {};
        for (char c : s){
            H[c-'a'] += 1;
        }
        for (char c : t) {
            H[c-'a'] -= 1;
            if ( H[c-'a'] < 0 ) return c;
        }
        return 0;
    }
};
