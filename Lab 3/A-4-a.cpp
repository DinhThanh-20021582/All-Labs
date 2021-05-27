# include <iostream>
	using namespace std;
	int main()
	{
	    char a[5] = {1, 4, 3, 2, 5};
	    cout << a[-1]<< endl;
	    cout << a[5] << endl;   //chi so  N
	    cout << a[6] << endl;   // chi soN+1
	    cout << a[7] << endl;   //chi so N+2
	    cout << a[8] << endl;   //chi so N+3
	    /** khi doc tran khong bi loi
	    cac phan tu mang chi so -1, N khong in gia tri
	    cac phan tu mang chi so N+1, N+2,... in ra cac bien  khong co trong mang */


	    return 0;
	}
