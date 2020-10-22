#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,a,b,diff;
  cin>>t;
  while(t--){
    diff = 0;
    cin>>a>>b;
    diff = abs(a-b);
    if(diff == 0){
      cout<<"0"<<endl;
    }else{
      if(diff != a-b){
        if(diff%2==0){
          cout<<"2"<<endl;
        }else{
          cout<<"1"<<endl;
        }
      }else{
        if(diff%2==0){
          cout<<"1"<<endl;
        }else{
          cout<<"2"<<endl;
        }
      }

    }
  }
  return 0;
}