#include <bits/stdc++.h>
using namespace std;
 
int main()
{
		int n, extra,rooms[10] = {0,0,0,0,0,0,0,0,0,0};
		string order;
		cin>>n;
		cin>>order;
		for(int i=0;i<n;i++){
			if (order[i]=='L') {
				for(int i=0;i<=9;i++){
					if(rooms[i]==0){
						rooms[i] = 1;
						break;
					}
				}
			} else if (order[i]=='R') {
				for(int i=9;i>=0;i--){
					if(rooms[i]==0){
						rooms[i] = 1;
						break;
					}
				}
			} else {
				rooms[order[i]-48] = 0;
			}
		}
		for(int i=0;i<=9;i++){
			cout<<rooms[i];
		}
    return 0;
}