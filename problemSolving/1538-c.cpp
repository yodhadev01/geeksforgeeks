#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,l,r,res=0;
        cin>>n>>l>>r;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
           res+=upper_bound(v.begin(),v.end(),r-v[i])-v.begin();
           res-=lower_bound(v.begin(),v.end(),l-v[i])-v.begin();
           if (l <= 2 * v[i] && 2 * v[i] <= r) {
            res--;
           }
        }
        cout<<res/2<<"\n";
    }
    return 0;
}