#include <bits/stdc++.h> 
using namespace std;

int main(){
  long long int t,a,b,n,rem,flag = 0;
  cin>>t;
  while(t--){
    cin>>a;
    if(a==1){
      cout<<0<<endl;
    }else{
      flag = 1;
      b=0;
      while(a%3 == 0){
        flag=0;
        if(a%6 == 0){
          a = a/6;
        }else{
          a = a*2;
        }
        if(a!=1 && a%3!=0){
          flag=1;
        }
        b++;
      }
      if(flag){
        cout<<-1<<endl;
      }else{
        cout<<b<<endl;
      }
    }
  }
  return 0;
}