#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int a, int b, int c, int d)
{
    int m = a;
    if (m < b)
        m = b;
   if (m < c)
        m = c;
    if (m < d)
        m = d;

    return m;
}
int main() {
    int a, b, c, d,m;
    cin >> a >> b >> c >> d;
   m= max(a, b, c, d);
    cout << m;

    return 0;
}
