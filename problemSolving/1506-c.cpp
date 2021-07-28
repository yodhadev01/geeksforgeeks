#include <bits/stdc++.h> 
 
using namespace std;
 
int main()
{
    long long int t,a,b,q;
	string x,y,z;
	bool extra = false;
    cin>>t;
    while(t--){
		cin>>x>>y;
		if (x.length()>y.length()) {
			z = y;
			y = x;
			x = z;
		}
		int sum = 0;
		for (int i=0;i<x.length();i++){

			int k=0,j = i;
			while(k<y.length()){
				int q = k;
				if (y[k] == x[i]){
					int localSum = 0;
					for(int u=i,w=k;w<y.length()&& u<x.length();w++,u++){
						if (y[w] == x[u]){
							// cout<<w<<" - "<<u<<endl;
							localSum++;
						} else {
							break;
						}
					}
					// cout<<endl<<" --new-- "<<endl;
					if(localSum>sum){
						sum = localSum;
					}
				}
				k++;
			}
		}
		// cout<<x.length()<<" "<<y.length()<<" "<<sum<<endl;
		cout<<(x.length()+y.length()-(sum*2))<<endl;
    }
    return 0;
}