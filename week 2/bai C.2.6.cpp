#include<iostream>
	using namespace std;
	

	int main()
	{
	    int tu,mau,temp,i=2;
	    cout << "moi nhap vao tu v� mau cua 1 phan so ";
	    cin >> tu >> mau;
	    while(true)
	    {
	        if(tu > mau) temp=tu;
	        else temp=mau;
	        if(tu%i==0 && mau%i==0)
	        {
	            tu=tu/i;
	            mau=mau/i;
	            i=2;
	        }
	        else i++;
	        if(i>temp) break;
	    }
	    cout << "phan so toi gian la: ";
	    cout << tu << "/" << mau;
	    return 0;
	    
	}


