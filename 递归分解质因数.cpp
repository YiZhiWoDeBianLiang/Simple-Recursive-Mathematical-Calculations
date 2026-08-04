#include <iostream>
using namespace std;
void dfs(int a , int b)
{
    if (a <= 1)return;
    if (a % b == 0)
    {
        cout << b << " ";
        dfs(a / b , b);
    }else
    {
        dfs(a , b + 1);
    }
}
int main()
{
    int n;
    cin >> n;
    dfs(n , 2);
    return 0;
}