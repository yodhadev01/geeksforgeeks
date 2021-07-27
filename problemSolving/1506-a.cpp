#include <bits/stdc++.h> 
 
using namespace std;
 
int main()
{
    long long int t,x,y,z,a,b;
    cin>>t;
    while(t--){
		cin>>x>>y>>z;
		a = ((z%x)-1)*y;
		b = ((z-(z%x))*x)/x;
		cout<<a+y<<endl;
    }
    return 0;
}