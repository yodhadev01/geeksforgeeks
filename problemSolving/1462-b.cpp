#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string n;
	char a, last2, last1 ;
	int x = 0, q;
	cin >> t;
	while (t--){
		cin>>q;
		cin >> n;
		last2 = '0';
		last1 = '0';
		x = 0;
		if (n[q-4]== '2' && n[q-3] == '0' && n[q-2] == '2' && n[q-1] == '0') {
			x = 1;
		}
		if (n[0]== '2' && n[q-3] == '0' && n[q-2] == '2' && n[q-1] == '0') {
			x = 1;
			
		}
		if (n[0]== '2' && n[1] == '0' && n[q-2] == '2' && n[q-1] == '0') {
			x = 1;
			
		}
		if (n[0]== '2' && n[1] == '0' && n[2] == '2' && n[q-1] == '0') {
			x = 1;
			
		}
		if (n[0]== '2' && n[1] == '0' && n[2] == '2' && n[3] == '0') {
			x = 1;
			
		}
		
		if (x==1) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}