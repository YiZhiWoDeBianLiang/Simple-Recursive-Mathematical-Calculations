#include <iostream>
using namespace std;
long long f(int n)
{
    if (n == 0)return 1;
    if (n == 1)return 1;
    return n * f(n-1);
}
int main()
{
    int a;
    cin >> a;
    cout << f(a);
    return 0;
}