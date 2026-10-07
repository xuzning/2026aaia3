// week05-3a.cpp 學習計畫 Bulit-in Fuction
// LeetCode 58. Length of Last Word 最後一個字的長度
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0,now = 0;
        for (char c : s){
            if (c==' '){
                if(now!=0)ans = now;
                now=0;
            }else now++;
        }
        if(now!=0) ans = now;
        return ans;
    }
};
