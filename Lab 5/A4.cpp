#include <iostream>
#include<string>
using namespace std;
void mang(int x[])
{
    for (int i = 0; i < 5; i++)
	 cout << &x[i] << " ";
   
}
void chuoi(string s)
{
    cout << &s ;
}
int main()
{
    int a[6] = { 1,2,3,4,5,6 };
    for (int i = 0; i < 6; i++) cout << &a[i] << " ";
    cout << endl;
    // pass by value
    string s;
    test1(a);
    cout << endl;
    
    cout << &s << endl;
    test2(s);
    cout << endl;
    
     // phuong thuc pass by reference
    return 0;
    }
    
    //b. C++ pass by reference

