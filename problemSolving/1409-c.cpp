#include <bits/stdc++.h> 
using namespace std;

int main(){
  int t,a,b,x,y,n,mn,mx,flag = 1, new_a_output,new_b_output;
  cin>>t;
  while(t--){
    cin>>n;
    vector<int> v;
    mx = 0;
    mn = 0;
    map<int, set<int> > m;
    for(int i=0;i<n;i++){
      cin>>a;
      v.push_back(a);
    }
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(m.find(v[i]+v[j]) == m.end()){
          set<int> s;
          s.insert(i);
          s.insert(j);
          m[v[i]+v[j]] = s;
          if(mx == 0){
            mx = 1;
            mn = v[i]+v[j];
          }
        }else{
          if(m[v[i]+v[j]].find(i) == m[v[i]+v[j]].end() && m[v[i]+v[j]].find(j) == m[v[i]+v[j]].end()){
            m[v[i]+v[j]].insert(i);
            m[v[i]+v[j]].insert(j);
            if(mx < m[v[i]+v[j]].size()){              
              mx = m[v[i]+v[j]].size();
              mn = v[i]+v[j];
            }
          }
        }
      }
    }
    // set<int>::iterator itr;
    // for(itr=m[mn].begin();itr!=m[mn].end();itr++){
    //         cout<<*itr<<" ";
    //     }
    if(mx<=1){
      cout<<mx<<endl;
    }else{
      cout<<mx/2<<endl;
    }
  }
  return 0;
}