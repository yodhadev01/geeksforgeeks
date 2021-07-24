#include <bits/stdc++.h> 
using namespace std;

int main(){
int t,n,c0,c1,c2,a,extra1,max,min,sum;
cin>>t;
	while(t--){
		cin>>n;
		sum=c0=c1=c2=0;
		for(int i=0;i<n;i++){
			cin>>a;
			extra1 = a%3;
			if(extra1 == 0){
				c0++;
			} else {
				if (extra1 == 1){
					c1++;
				}else{
					c2++;
				}
			}
			
		}
		cout<<endl<<c0<<" "<<c1<<" "<<c2<<endl;
		while(1){
			max = std::max(c0,std::max(c1,c2));
			min = std::min(c0,std::min(c1,c2));
			if (c1 == c2 && c1 == c0){
				cout<<sum<<endl;
				break;
			}
			if (max == c0){
				if(min==c1){
					c1++;
					sum++;
					c0--;
				}
				if(min==c2){
					c2++;
					sum++;
					sum++;
					c0--;
				}
			} else if (max == c1){
				if(min==c2){
					c1--;
					sum++;
					c2++;
				}
				if(min==c0){
					c1--;
					sum++;
					c0++;
				}
			}else if (max == c2){
				if(min==c1){
					c2--;
					sum++;
					c1++;
				}
				if(min==c0){
					c2--;
					sum++;
					sum++;
					c0++;
				}
			}
		}
		cout<<c0<<" "<<c1<<" "<<c2<<endl;
	}
return 0;
}