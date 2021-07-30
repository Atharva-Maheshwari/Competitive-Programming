//Problem-Watermelon

#include <iostream>
using namespace std;

int main()
{
	int a[10],T,N,i,j,sum;
	cin>>T;
	for(i=1;i<=T;i++)
	{
	 sum=0;
	 cin>>N;
	 for(j=1;j<=N;j++)
	 {
	  cin>>a[j];
	  sum=sum+a[j];
	 }
	 if(sum>=0)
	 cout<<"YES"<<endl;
	 else
	 cout<<"NO"<<endl;
	}
    return 0;
}
