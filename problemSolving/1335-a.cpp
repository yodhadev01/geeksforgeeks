#include <bits/stdc++.h> 
using namespace std;

int main(){
  long long int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    if(n%2 == 0){
      cout<<n/2 - 1<<endl;
    }else{
      if(n==1){
        cout<<"0"<<endl;
      }else{
        cout<<(n-1)/2<<endl;
      }
    }
  }
  return 0;
}