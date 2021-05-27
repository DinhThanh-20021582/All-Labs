#include<iostream>
using namespace std;
int main()
{
int* p = new int;
int* p2 = p;
*p = 10;
delete p;
cout << *p2;
delete p2;
return 0;
}
//Ta thay chýõng trinh báo loi Free(): double free detected in t cache 2 /n Abort (core dumped).Vi vay nen cap phat bo nho dong cho p2;

