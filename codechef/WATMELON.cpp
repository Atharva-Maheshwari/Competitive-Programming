//Problem-Watermelon

#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0);
main()
{
	IOS	
	int t;
	cin>>t;
	while(t--)
	{
		int n, sum=0;
		cin>>n;
		int arr[n+1];
		for(int a=1; a<=n; a++)
		{
			cin>>arr[a];
			sum+=arr[a];
		}
		if(sum<0)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}
}