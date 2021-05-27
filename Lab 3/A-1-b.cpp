# include <iostream>
	using namespace std;
	int a[5] = {1, 2, 3, 4};    // N > 4
	//int b[3] = {1, 2, 3, 4};  //N < 4
	int main()
	{
	    int c[5] = {1, 2, 3, 4};    // N > 4
	    //int d[3] = {1, 2, 3, 4};    // N < 4
	    // xuat mang khai bao ngoai  main
	    for (int i=0; i<5; i++)
	        cout << a[i] << " ";
	    cout << endl;
	    //xuat mang khai bao trong  main
	    for (int i=0; i<5; i++)
	        cout << c[i] << " ";
	    return 0;
	}
