//Problem-Sum of Digits

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,m;
        cin>>n;
        
        while(n>0)
        {
            m=n%10;
            sum+=m;
            n=n/10;
        }
        cout<<sum<<endl;
    }
	return 0;
}
