//Problem-First and Last Digit

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,sum;
	    cin>>n;
	    sum=n%10;
	    while(n>9)
	    {
	        n=n/10;
	    }
	    cout<<sum+n<<endl;
	}
	return 0;
}
