#include<iostream>
using namespace std;
int main () 
{
	int n;
	int *p;
	cin >> n;
	cout << n << endl;
	p = &n;
	delete p;
	cout << n << endl;
	return 0;
}
	// du lieu cua con tro bi mat di 1 phan do chua duoc cap bo nho dong
