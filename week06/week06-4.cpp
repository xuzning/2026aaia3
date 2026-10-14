// week06-4.cpp 學習計畫 Simulation 第1題
// LeetCode 682. Baseball Game
// 5: 陣列裡 5
// 2: 陣列裡 5 2
// C: 陣列裡 5 (刪掉了最後的2)
// D: 陣列裡 5 10 (把最後的5變2倍，塞入)
// +: 陣列裡 5 10 5 (把最後2個數 5+10變15，塞入)
// 答案是把所有數加起來
class Solution {
public: // week02教 string， week03教 vector<int>
    int calPoints(vector<string>& operations) {
        // 遇到 Simulation 模擬就用for迴圈一步步做
        // week03 week04教過C++進階for迴圈 for(char c : s) for (int num : a)
        vector<int> a;
        for (string s : operations) {
            if (s=="C") {
                a.pop_back();
            } else if (s=="D"){
                a.push_back( a[a.size()-1] * 2);
            } else if (s=="+"){
                a.push_back( a[a.size()-2] + a[a.size()-1] );
            } else { // 剩下的就次單純的放數字
              // a.push_back( stoi(s) ); // 方法1: stoi(s) 在C++11最簡單的方法
              // a.push_back( atoi(s.c_str()) ); // 方法2: atoi(s.c_str() ) 轉成傳統C語言的方法
              // 方法3: 上週教過的stringstream字串變串流，再流到答案裡
              int now;
              stringstream ss(s);
              ss >> now;
              a.push_back(now);
            }
      }
      int ans = 0;
      for (int num : a){
        ans += num;
      }
      return ans;
     }
};
