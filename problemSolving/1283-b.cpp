#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,k,rem,result,extra;
  cin>>t;
  while(t--){
    cin>>n>>k;
    result = 0;
    if(n>k){
      result += k*(int(n/k));
      rem =  n%k;
      extra = 0;
      if(rem <= k/2){
        result+=rem;
      }else{
        result+=k/2;
      }
      cout<<result<<endl;
    }else{
      if(n==k){
        cout<<n<<endl;
      }else{
        if(n<=k/2){
          cout<<n<<endl;
        }else{ 
          cout<<k/2<<endl;
        }
      }
    }


  }
  return 0;
}