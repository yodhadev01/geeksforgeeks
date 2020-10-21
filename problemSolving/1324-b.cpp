#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,a,max,i,flag=0;
  cin>>t;
  while(t--){
    cin>>n;
    max = 0;
    i = 0;
    map< int, vector<int> > m;
    flag = 0;
    while(n--){
      cin>>a;
      m[a].push_back(i);

      // if(m.find(a) != m.end()){
      //   m[a].push_back(i);

      // }else
      // if(m[a].size()>max){
      //   max
      // }
      i++;
    }
    map< int, vector<int> >::iterator itr;

    for(itr = m.begin(); itr!=m.end(); itr++){
      if(itr->second.size()>2){
        cout<<"YES"<<endl;
        flag = 1;
        break;
      }
      if(itr->second.size() == 2){
        // cout<<itr->first<<" "<<itr->second[0]<<" "<<itr->second[1]<<endl;
        if(itr->second[0]-1 != itr->second[1] && itr->second[1]-1 != itr->second[0]){
          // cout<<itr->second[0]<<" "<<itr->second[1]<<endl;
          cout<<"YES"<<endl;
          flag = 1;
          break;
        }
      }
    }
    if(flag == 0){
      cout<<"NO"<<endl;
    }
  }
  return 0;
}