#include <iostream>
	using namespace std;
	

	main()
	{
	    int a,b,UCLN;
	    cout << "Moi nhap vao hai so a va b ";
	    cin >> a >> b;
	    while(a*b!=0)
	    {
		if(a>=b)
	    a=a%b;
	    else
	    b=b%a;}
	    UCLN=a+b;
	    cout << "UCLN cua a va b: ";
	    cout << UCLN;
	}

