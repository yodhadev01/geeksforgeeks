#include <bits/stdc++.h> 
 
using namespace std;
 
int main()
{
    long long int t,x,y,z,a,b,q;
    cin>>t;
    while(t--){
		cin>>x>>y>>z;
		q = (z%x);
		if(q==0){
			q = x;
		}
		a = (q-1)*y;
		b = ((z-q))/x;
		// cout<<endl<<a<<" "<<b<<endl;
		cout<<a+b+1<<endl;

    }
    return 0;
}