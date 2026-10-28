// week08-1a.cpp 學習計畫 Matrix 第1題
// LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0; // 最最有錢的人，有多有錢? (先設成0)
        for ( vector<int> a : accounts){
            int now = 0;
            for ( int num : a) {
                now += num;
           }
           ans = max(ans, now);
        }
        return ans;
    }
};
