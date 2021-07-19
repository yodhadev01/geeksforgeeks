#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t,n,count1=0, count2=0, random;
  cin>>t;
  while(t--){
    count1=0;
    count2=0;
    cin>>n;
	for(int i=0;i<n;i++){
		cin>>random;
		if (random == 1){
			count1++;
		} else {
			count2++;
		}
	}
	if (count1 == 0){
		if (count2%2 ==0) {
			cout<<"YES"<<endl;
		} else{
			cout<<"NO"<<endl;
		}
	} else if (count2 == 0){
		if (count1%2 ==0) {
			cout<<"YES"<<endl;
		} else{
			cout<<"NO"<<endl;
		}
	} else {
		if (count1%2 ==0 && count2%2 ==0) {
			cout<<"YES"<<endl;
		} else if (count1%2 ==0 && count2%2 !=0){
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
  }
  return 0;
}