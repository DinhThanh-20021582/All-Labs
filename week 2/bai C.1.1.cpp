#include <iostream>
	#include <math.h>
	using namespace std;
	int main()
	{
		int n;
		int count = 0;
		cout << "Moi nhap vao so n: ";
		cin >> n;
		if ( n < 2) 
		{ cout << "No"; }
	    for ( int i = 2; i <= sqrt(n) ; i++ ){
	    	if ( n % i == 0){
	    		count++;
	    		}
	    }
	    if ( count == 0 ){ cout << "Yes";}
		else { cout <<"No";}
	}	


