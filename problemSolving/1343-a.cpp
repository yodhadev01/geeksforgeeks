#include <bits/stdc++.h> 
using namespace std;

int main(){
  long long int t,n,a,b;
  float m;
  cin>>t;
  while(t--){
    cin>>a;
    n = 1;
    b = 0;
    for(long long int i=0;i<a;i++){
      m = pow(2,i);
      b += m;
      // cout<<a<<" "<<b<<endl;
      m = a/b;
      if(a%b == 0 && b != 1){
        cout<<a/b<<endl;
        break;
      }
    }
  }
  return 0;
}