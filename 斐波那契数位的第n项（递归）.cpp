#include <iostream>
using namespace std;
int dfs(int a)
{
    if (a == 1 || a  == 2)return 1;
    return dfs(a - 1) + dfs(a - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << dfs(n);
    return 0;
}