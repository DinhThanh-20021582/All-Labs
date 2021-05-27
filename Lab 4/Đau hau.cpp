#include <iostream>
using namespace std;
struct Point
{
    int x,y;
};
int main()
{
    Point a[10000];
    int N;
    cin >> N;
    for (int i=1;i<=N; i++)
    {
        cin >> a[i].x>>a[i].y;
        for (int j=1;j<i;j++)
        {
            if (abs(a[i].x-a[j].x) == abs(a[i].y-a[j].y)||a[i].x ==a[j].x||a[i].y==a[j].y ){
                cout << "yes";return 0;}
        }
    }
    cout << "no";
    return 0;
}
