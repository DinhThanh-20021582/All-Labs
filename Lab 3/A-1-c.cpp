# include <iostream>
	using namespace std;
	int a[] = {1, 2, 3, 4};
	int main()
	{
	    int b[] = {1, 2, 3, 4};
	    // xuat mang khai bao ngoai  main
	    for (int i=0; i<4; i++)
	        cout << a[i] << " ";
	    cout << endl;
	    // xuat mang khai bao trong  main
	    for (int i=0; i<4; i++)
	        cout << b[i] << " ";
	    return 0;
	}
