//Problem-Second Largest 

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,c;
    cin>>a>>b>>c;
        if(a>b && a>c)
        cout<<max(b,c)<<"\n";
        else if(b>a && b>c)
            cout<<max(a,c)<<"\n";
        else
            cout<<max(a,b)<<"\n";
	}
	return 0;
}