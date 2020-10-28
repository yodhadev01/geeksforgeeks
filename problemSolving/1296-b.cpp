#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,new_n,sum,rem;
  cin>>t;
  while(t--){
    cin>>n;
    sum = n;
    rem = 0;
    while(n>=10){
      new_n = n/10;
      rem = n % 10;
      sum += new_n;
      n = new_n + rem;
    }
    cout<<sum<<endl;
  }
  return 0;
}