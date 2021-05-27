#include <iostream>
	using namespace std;
	int main()
	{
		int n;
		cout << "moi nhap vao so n <100: ";
		cin >> n;
		if ( n > 100) 
			{ cout << "Nhap lai n: "; 
			  cin >> n ; 
			}
		for ( int i = 1; i<= n; i++)
		{
			if ( i > 0 && i % 2 == 0 )
	
	cout << i << " ";
			
		}
	}

#include <iostream>
	using namespace std;
	int main()
	{
		int n;
		int i = 1;
		cout << "moi nhap vao so n <100: ";
		cin >> n;
		do {
			if ( i > 0 && i % 2 == 0) cout << i << " ";
	
				
			
			i++;
		} while ( i <= n && n <= 100);
	}


