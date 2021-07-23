#include <bits/stdc++.h> 
using namespace std;

int main(){
float t,n,a,extra,last1,last2,localSum,sum;
cin>>t;
	while(t--){
		cin>>n;
		last1 = last2 = 0;
		localSum = 0;

		for(int i=0;i<n;i++){
			cin>>a;
			last2 = last1;
			last1 = a;
			if (i!=0){
				float max = std::max(last1, last2);
				float min = std::min(last1, last2);
				// cout<<"before while "<<max<<" "<<min<<" "<<localSum<<endl;

				while (max/min > 2.0) {
					localSum++;
					// cout<<max<<" "<<min<<" "<<localSum<<endl;
					max = std::ceil(max/2);
					if(max/2 < min){
						break;
					}
				}
			}
		}
		cout<<localSum<<endl;
	}
return 0;
}