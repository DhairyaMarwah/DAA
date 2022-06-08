// C++ program for Lucky Numbers
#include <bits/stdc++.h>
using namespace std;
#define bool int

bool isLucky(int n)
{
	static int counter = 2;
	
	if(counter > n){
        // cout<<"n"<<n<<"counter"<<counter<<"\n";
		return 1;
    }
	if(n % counter == 0){
        // cout<<"n"<<n<<"counter"<<counter<<"\n";
		return 0;
    }
	
	n = n - (n/counter);
	
	counter++;
	return isLucky(n);
}

// Driver Code
int main()
{
	int x = 5;
    cin>>x;
	if( isLucky(x) )
		cout << x << " is a lucky no.";
	else
		cout << x << " is not a lucky no.";
}

