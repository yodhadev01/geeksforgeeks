#include <bits/stdc++.h> 
using namespace std;

int main(){
  long long int t,m,n,a,b,c;
  cin>>t;
  while(t--){
    cin>>n>>m;
    if(n == 1){
      cout<<0<<endl;
    }else{
      if(n>m){
        if(n<=2){
          cout<<m<<endl;
        }else{
          cout<<m*2<<endl;
        }
      }else{
        long long int sum = 0;
        a = n/2;
        b = m/a;
        c = m%a;
        if(n>3){
          sum = 2*(b+c);
          if(n%2 ==0){
            sum += (n-2)*b;
          }else{
            sum+= (n-3)*b;
          }
          cout<<sum<<endl;
        }else{
          if(n == 3){
          cout<<m*2<<endl;

          }else{
          cout<<m<<endl;

          }
        }
      }
    }
  }
  return 0;
}