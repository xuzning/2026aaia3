// week08-3.cpp 學習計畫 Matrix 第3題 螺旋矩陣印出來 Medium題
// LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int M = matrix.size(), N = matrix[0].size();
        int left = 0, right = N - 1, up = 0, down = M - 1;
        while (ans.size() < M * N) {
            // 往右
            int i = up;
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[i][j]);
            }
            up++;
            // 往下
            int j = right;
            for (int i = up; i <= down; i++) {
                ans.push_back(matrix[i][j]);
            }
            right--;
            if (ans.size() == M * N)
                break;

            // 往左
            i = down;
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[i][j]);
            }
            down--;
            // 往上
            j = left;
            for (int i = down; i >= up; i--) {
                ans.push_back(matrix[i][j]);
            }
            left++;
        }
        return ans;
    }
};
