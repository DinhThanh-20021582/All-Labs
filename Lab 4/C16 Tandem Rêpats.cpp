#include <iostream>
#include <algorithm>
using namespace std;
int soTandem(string s, int a,int b)
{
    int c=1;
    bool check;
    while (true)
    {
        for (int i=0; i<b-a+1; i++)
           if (s[a+i-1] != s[a+i-1+c*(b-a+1)]) 
           return c;
           c++;
    }
}
int main()
{
    int M, N;
    cin>>M>>N;
    string S;    
    cin>>S;;
    int a,b;
    for (int i = 1; i <= N; i++)
    {
        cin >> a >> b;
        cout << soTandem(S, a, b) << endl;
    }
}
