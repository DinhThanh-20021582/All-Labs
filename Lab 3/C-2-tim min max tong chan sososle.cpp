#include<iostream>
	using namespace std;
	int main()
	{
		int n,a[n],tong = 0,sosole = 0;
		cout << "moi nhap n:" ;cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			if(a[i]%2==0)
			 tong = tong+a[i];
			else sosole = sosole +1;
		}
		int max = a[0];
		for(int i=0;i<n;i++)
		{
			if(max<a[i]) max = a[i];
		}
		int min = a[0];
		for(int i=0;i<n;i++)
		{
			if(min>a[i]) min = a[i];
		}
		cout << "Phan tu lon nhat la:" << max <<endl;
		cout << "Phan tu nho nhat la:" << min << endl;
		cout << "Tong cac ptu chan la:"<< tong <<endl;
		cout << "So phan tu le la:" << sosole << endl;
		return 0; 
	}

