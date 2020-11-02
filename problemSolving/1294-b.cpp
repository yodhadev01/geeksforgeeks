#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,a,max,n,flag,b,left;
  string s;
  cin>>t;
  while(t--){
    cin>>n;
    map<int, vector<int> > m;
    while(n--){
      cin>>a>>b;
      m[a].push_back(b);
    }
    max = 0;
    left = 0;
    flag = 0;
    s = "";
    // for(auto itr = m.begin(); itr!=m.end(); itr++){
    //   cout<<itr->first<<endl;
    //   for(auto i = 0; i<itr->second.size(); i++){
    //     cout<<itr->second[i]<<" ";
    //   }
    //   cout<<endl;
    // }
    for(auto itr = m.begin(); itr!=m.end(); itr++){
      sort(itr->second.begin(), itr->second.end());
      if(itr->second[0] < max){
        flag = 1;
        break;
      }
      n = itr->first;
      n = n-left;
      left  = itr->first;
      while(n--){
      s += "R";
      }
      n = itr->second[itr->second.size()-1];
      n = abs(max-n);
      while(n--){
        s += "U";
      }
      // RUUURRRRUU
      max = itr->second[itr->second.size()-1];
    }
    if(flag){
      cout<<"NO"<<endl;
    }else{
      cout<<"YES"<<endl;
      cout<<s<<endl;
    }
  }
  return 0;
}