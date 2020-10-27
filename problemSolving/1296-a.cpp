#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,odd,even,diff;
  cin>>t;
  while(t--){
    cin>>n;
    odd = 0;
    while(n--){
      cin>>diff;
      if(diff%2 != 0){
        odd++;
      }
    }
    cout<<odd<<endl;
    if(odd != 0 && odd%2 != 0){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}