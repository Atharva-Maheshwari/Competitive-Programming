//Problem-Valid Pair

#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,count=0;
    cin>>a>>b>>c;
    
    if(a==b)
    count++;
    else if (a==c)
    count++;
    else if (b==c)
    count++;
    
    if(count>0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
	
	return 0;
}
