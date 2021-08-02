#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int  t;
    cin>>t;
 
    while(t--)
    {
        int n;
        cin>>n;
        int l,s;
 
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            
            if(x==n) l=i;
            if(x==1) s=i;
        }
        
 
        if(s>l)
        {
            int t=s;
            s=l;
            l=t;
        }
 
        int k=s+min((l-s),(n-l+1));
        int u=(n-l+1)+min(s,(l-s));
 
        cout<<min(k,u)<<nl;
 
 
 
    }
 
    return 0;
}