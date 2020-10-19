#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t,n,a,b,c,d;
  cin>>t;
  while(t--){
    d = -1;
    b = c = 0;
    cin>>n;
    map<int,int> m;
    map<int,int>::iterator mit;
    for(int i=0;i<n;i++){
      cin>>a;
      // m.find(a) != m.end()
      if(m[a] != 0){
        m[a] = m[a]+1;
      }else{
        m[a] = 1;
      }
      if(m[a] > b){
        d = a;
        b = m[a];
      }
    }

    for(mit = m.begin();mit!=m.end();mit++){
      if(mit->first != d){
        c++;
      }
      // cout<<mit->first<<" "<<mit->second<<endl;
    }
    a = min(b,c);
      c++;
      b--;
    // cout<<b<<" - "<<c<<" - "<<d<<endl;
    if( n!=1 ){
      cout<<max(a,min(c,b))<<endl;
    }else{
      cout<<0<<endl;
    }
  }
  return 0;
}