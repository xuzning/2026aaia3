// weel06-3.cpp 學習計畫 Simulation 第2題
// LeetCode 657. Robot Return to Origin
// 機器人 往上U 往左D 往右R,問是否會回到原來位置
class Solution {
public:
    bool judgeCircle(string moves) {
        // 程式在中間，上面3行不要動
        int x = 0, y = 0;
        for (char c : moves){
            if (c=='U') y++;
            if (c=='D') y--;
            if (c=='L') x--;
            if (c=='R') x++;
        }
        if (x==0 && y==0) return true;
        else return false;
    }
};
