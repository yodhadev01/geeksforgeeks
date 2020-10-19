#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t,n,x,sum,floor;
  cin>>t;
  while(t--){
    sum = 2;
    floor = 1;
    cin>>n>>x;
    if(n<=sum){
      cout<<floor<<endl;
    }else{
      int inc = 1;
      while(1){
        floor++;
        if(n <= (inc*x)+2){
          // cout<<inc<<" "<<x<<endl;
          cout<<floor<<endl;
          break;
        }
        inc++;
      }
    }
  }
  return 0;
}