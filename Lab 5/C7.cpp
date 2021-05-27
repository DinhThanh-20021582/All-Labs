#include <iostream>
using namespace std;

void in(int cach, int in_sao)
{
	for (int i = 0; i < cach; i++) 
		cout << " ";
	for (int i = 0; i < in_sao; i++)
		cout << "*";	 
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		in(n-i-1, i*2+1);
		cout << endl;
	}
	return 0;
}
