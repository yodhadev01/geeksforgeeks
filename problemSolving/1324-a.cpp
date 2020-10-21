#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,a,num_odd,num_eve;
  cin>>t;
  while(t--){
    cin>>n;
    num_odd = 0;
    num_eve = 0;
    while(n--){
      cin>>a;
      if(a%2==0) {
        num_eve++;
      }else{
        num_odd++;
      }
    }
    if(num_eve == 0 || num_odd == 0){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}