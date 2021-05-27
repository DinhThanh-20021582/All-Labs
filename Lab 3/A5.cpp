# include <iostream>
	# include <ctime>
	# include <cstdlib>
	using namespace std;
	int main()
	{
	    srand (time(NULL));
	    int a[30];
	    for (int i=0; i<30; i++)
	        a[i] = rand ()%100 +1;
	    for (int i=0; i<30; i++)
	    {
	        for (int j=i+1; j<30; j++)
	        {
	            if(a[i]>a[j])
	            {
	                int tmp = a[i];
	                a[i] = a[j];
	                a[j] = tmp;
	            }
	        }
	    }
	    for (int i=0; i<30; i++)
	        cout << a[i] << " ";
	    return 0;
	}


 21  C.1 tim lap.cpp 
@@ -0,0 +1,21 @@
# include <iostream>
	using namespace std;
	int main()
	{
	    int n;
	    cin >> n;
	    int a[1000];
	    for (int i=0; i<n; i++)
	    {
	        cin >> a[i];
	    }
	    for (int i=0; i<n; i++)
	        for (int j=i+1; j<n; j++)
	            if(a[i] == a[j])
	            {
	                cout << "yes";
	                return 0;
	            }
	    cout << "no";
	}
