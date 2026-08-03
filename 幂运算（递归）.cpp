#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double n , m;
double f(double a , double b)
{
    if (b == 0)
    {
        if (a == 0)
        {
            return NAN;
        }else{
            return 1;
        }
    }
    double t = round(b);
    if (fabs(b - t) < 1e-10)
    {
        if (b > 0)
        {
            if (a == 0)return 0;
            return a * f(a , b - 1);
        }else{
            if (a == 0)return NAN;
            if (b < 0)b = abs(b);
            return 1 / a * f(1 / a , b - 1);
        }
    }else
    {
        if (a == 0)
        {
            if (b > 0)
            {
                return 0;
            }else{
                return NAN;
            }
        }
        return exp(log(a) * b);
    }
}
int main()
{
    cin >> n >> m;
    cout << fixed << setprecision(10) << f(n,m);
    return 0;
}