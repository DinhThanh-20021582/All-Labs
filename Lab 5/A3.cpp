#include <iostream>


using namespace std;
void doigiatri(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
    cout << &x << " " << &y << endl;
}
void doidiachi(int& x, int& y)
{
    int tmp = x;
    x = y;
    y = tmp;
    cout << &x << " " << &y << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << &a << " " << &b << endl;
    doigiatri(a, b);
    doidiachi(a, b);
   
    return 0;
    
    // tham tri la truyen cho doi so ban sao
    // doi so và tham tri là hai bien doc lap khác nhau, trong khi doi so va tham bien chinh là mot bien
    
}
