#include <iostream>
using namespace std;
int gcd(int a , int b)
{
    if (a == b)return a;
    else if (a > b)
    {
        return gcd(b , a - b);
    }else
    {
        return gcd(a , b - a);
    }
}
int main()
{
    int n , m;
    cin >> n >> m;
    cout << gcd(n ,m);
    return 0;
}