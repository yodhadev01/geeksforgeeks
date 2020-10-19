#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int t,n,div,rem,sum,min;
  cin>>t;
  while(t--){
    cin>>n;
    div = 0;
    rem = 0;
    sum = 1;
    min = INTMAX_MAX;
    if(n == 1){
      cout<<"0"<<endl;
      continue;
    }
    while(sum<n){
      div = n/sum;
      rem = n%sum;
      rem = rem!=0 ? 1 : 0;
      if(min>((sum-1)+rem+div)){
        min = ((sum-1)+div+rem);
        // break;
      }
      if(min<((sum-1)+rem+div)){
        break;
      }
      sum++;
    }
    cout<<min-1<<endl;
  }
  return 0;
}