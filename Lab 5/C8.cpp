#include <iostream>
#include <cmath>
using namespace std;
int round_1(double x)
{
    if (ceil(x) - x <= 0.5) return ceil(x);
    else return floor(x);
}
int round_2(double x)
{
    int a = x;
    double n = (double)x - a;
    if (n<= 0.5) return a;
    else return a + 1;
}
int main()
{
    double c;
    cin >> c;
    cout << round_1(c) << " " << round_2(c);
    return 0;
}

