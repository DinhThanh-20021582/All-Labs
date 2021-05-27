#include <iostream>
	using namespace std;
	int main()
	{
	    int n;
	    cin >> n;
	    int arr[100][100];
	    for (int i = 1; i <= n; i++)
	    {
	        for (int j = 1; j <= n; j++)
	        {   
	            if (i+j <= 11)
	            arr[i][j] = i + j -1;
	            else
	            arr[i][j] = i + j - 11;
	        }
	    }
	    for (int i = 1; i <= n; i++)
	    {
	        for (int j = 1; j <= n; j++)
	        {
	            cout << arr[i][j] << " ";
	        }
	        cout << endl;
	    }
	}


