// week07-3.cpp 學習計畫 Simulation 第4題
// LeetCode 1041. Robot Bounded In Circle 會不會繞圈圈
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, d=0; // d是 0:北 1:東 2:南 3:西
        for (char c : instructions){
            if (c=='R') d = (d+1) % 4;
            if (c=='L') d = (d-1+4) % 4;
            if (c=='G') {
                if (d==0) y++;
                if (d==1) x++;
                if (d==2) y--;
                if (d==3) x--;
            }
        }
        // 指令走完 離開迴圈 要檢查
        if (x==0 && y==0) return true;
        if (d != 0)return true;
        return false;
    }
};
