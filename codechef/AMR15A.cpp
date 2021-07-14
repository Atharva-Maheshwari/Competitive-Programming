//Problem-Mahasena

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,cnt_even=0,cnt_odd=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        cnt_even++;
        else
        cnt_odd++;
    }
    
    if(cnt_even>cnt_odd)
    cout<<"READY FOR BATTLE";
    else
    cout<<"NOT READY";
	return 0;
}