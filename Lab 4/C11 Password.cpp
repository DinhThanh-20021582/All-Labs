#include <iostream>
using namespace std;
string daoxau(string s)
{
    string s1="";
    for (int i=0; i<s.length(); i++) 
    s1=s[i]+s1;
    return s1;
}
int main()
{
    int N;
    cin >> N;
    string a[N];
    for (int i=0; i<N; i++)
    {
        cin >> a[i];
        if (a[i].length()%2 == 1)
        {
            for (int j=0; j<i; j++)
                if (a[j].length()%2==1 && a[i]==daoxau(a[j]) )
                {
                    cout << a[i].length() << " ";
                    cout << a[i][a[i].length()/2] << endl;
                    return 1;
                }
        }
    }
}
