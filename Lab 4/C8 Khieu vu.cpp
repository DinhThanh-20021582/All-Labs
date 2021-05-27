#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
   double nam[N],nu[N];
    for (int i = 0;i < N;i++) 
    cin >> nam[i] >> nu[i];
    sort (nam,nam + N);
    sort (nu,nu + N);
    for (int i = 0;i < N;i++)
        if (nam[i]<nu[i])
        {
            cout << "No";
            return 0;
        }
    cout << "Yes";
    return 0;
}
