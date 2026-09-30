/// week04-2bad.cpp 這程式是對的，用進階C++迴圈
/// 但在Codeblock 出錯，waring : range-based for only available with...
/// 2011年之後，只有在-std=c++11 或 -std=gun++11 才能用
/// 所以需要改設定
/// 選第2個 使用 c++11 IOS 國際標準的c++ 也就是 -std=c++11
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> a;
    int now;
    for (int i=0; i<20; i++) {
        cin >> now;
        if (now==0) break;
        a.push_back(now);
    }
    cin >> now;
    int ans = 0;
    for (int num : a){
        if (num==now) ans++;
    }
    cout << ans << "\n";
}
