/// week03-5.cpp 想要真的認識 vector<int> a
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(99);
    a.push_back(88);
    a.push_back(77);
    for (int i=0; i < a.size(); i++) cout  << a[i] << " ";
    cout << "\n";

}

