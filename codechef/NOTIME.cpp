//Problem-No Time to Wait

#include <iostream>
using namespace std;

int main() 
{
	int n, h, x;
	cin >> n >> h >> x;
	int t[n], fg=0;
	for(int i=0; i<n ; i++)
	{
	    cin>>t[i];
	}
	for(int i=0; i<n ; i++)
	{
	    if( (t[i]+x) == h)
	    {
	        cout<<"YES";
	        fg=1;
	        break;
	    }
	}
	if(fg==0)
	cout<<"NO";
	return 0;
}
