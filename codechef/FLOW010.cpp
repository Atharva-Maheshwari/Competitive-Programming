//Problem-Id and Ship

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        char ch;
        cin>>ch;
        
        if(ch=='b' || ch=='B')
        cout<<"BattleShip\n";
        else if(ch=='c' || ch=='C')
        cout<<"Cruiser\n";
        else if(ch=='d' || ch=='D')
        cout<<"Destroyer\n";
        else if(ch=='f' || ch=='F')
        cout<<"Frigate\n";
    }
	return 0;
}