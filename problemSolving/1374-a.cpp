#include <bits/stdc++.h> 
using namespace std;

int main(){
  long long int t,a,b,n,rem,flag = 0;
  cin>>t;
  while(t--){
    cin>>a>>b>>n;
    rem = n%a;
    if(rem>=b){
      cout<<n-(rem-b)<<endl;
    }else{
      cout<<(n-rem)-(a-b)<<endl;
    }
  }
  return 0;
}