// week0-2.cpp SOLT108_Advance_002B
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a<b) swap(a,b);
    if (a<c) swap(a,c);
    if (b<c) swap(b,c);
    cout << a*100+b*10+c+1;
}
