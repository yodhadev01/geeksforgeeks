#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,a,b,c,n;
  cin>>t;
  while(t--){
    cin>>a>>b>>c>>n;
    if((a+b+c+n)%3==0){
        n=(a+b+c+n)/3;
        if(a<=n && b<=n && c<=n){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        cout<<"NO\n";
    }
  }
  return 0;
}