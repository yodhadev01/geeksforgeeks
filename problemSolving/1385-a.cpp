#include <bits/stdc++.h> 
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int t,count = 0;
  cin>>t;
  while(t--){
    count = 0;
    long long int a,b,c,mx,mn;
    cin>>a>>b>>c;
    mx=max(a,max(b,c));
    mn=min(a,min(b,c));
    if(mx == a){
      count++;
    }
    if(mx == b){
      count++;
    }
    if(mx == c){
      count++;
    }
    if(count>=2){
      cout<<"YES"<<endl<<mx<<" "<<mn<<" "<<mn<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}