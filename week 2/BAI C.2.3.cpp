#include<iostream>
	using namespace std;
	

	int main()
	{
	    double a,b,c;
	    cout << "MOI NHAP VAO DO DAI 3 CANH CUA TAM GIAC: ";
	    cin >> a >> b >> c;
	    if(a+b<c || a+c<b || b+c<a) return 0;
	    Else
	    {
	        cout << "CHU VI TAM GIAC LA: " << a+b+c << endl;
	        if(a==b && b==c) cout << "TAM GIAC DEU ";      
	        else if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
	        {
	        cout << "TAM GIAC VUONG";
	        if(a==b || b==c || a==c) cout << "TAM GIAC CAN";
	        }
	        else if(a==b && b!=c) cout << "TAM GIAC CAN";
	    } 
	    return 0;
	}


