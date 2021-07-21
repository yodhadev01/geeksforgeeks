#include <bits/stdc++.h> 
using namespace std;

int main(){
long long int t,n,a,localSum,sum;
cin>>t;
	while(t--){
		cin>>n;
		vector<long long int> v1;
		vector<long long int> v2;
		localSum = sum = 0;
		for (int i=0;i<n;i++){
			cin>>a;
			v1.push_back(a);
			v2.push_back(0);
		}

		for(int i=0;i<v1.size();i++){
			vector<long long int> v3;
			long long int j = i+1;
			while(j<=v1.size()){
				v3.push_back(j-1);
				if (v2[j-1] != 0) {
					break;
				}
				j +=v1[j-1];
			}
			localSum = 0;
			for(int k=v3.size()-1;k>=0;k--){
				if (v2[v3[k]] != 0){
					localSum = v2[v3[k]];
				}else{
					v2[v3[k]] = localSum+v1[v3[k]];
					localSum+=v1[v3[k]];
				}
				
			}
			// cout<<endl;
			// cout<<"---------------";
			// cout<<endl;
			// for(int p=0;p<v2.size();p++){
			// 	cout<<v2[p]<<" ";
			// }
			// cout<<endl;
			// for(int p=0;p<v3.size();p++){
			// 	cout<<v3[p]<<" ";
			// }
			// cout<<endl;
			// cout<<"---------------";
			// cout<<endl;
			if (sum<localSum) {
				sum = localSum;
			}
		}
		cout<<sum<<endl;
	}
return 0;
}