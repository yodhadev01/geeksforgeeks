#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,a,flag = 0,max1=-1;
  cin>>t;
  while(t--){
    cin>>n;
    map<int,vector<int > > val_with_pos;
    map<int,int > counter;
    map<int,int >::iterator itr;
    map<int,vector<int> > rev_counter;
    for(int i=0;i<n;i++){
      cin>>a;
      val_with_pos[a].push_back(i);
      counter[a]++;
    }

    for(itr = counter.begin(); itr != counter.end(); itr++){
      rev_counter[itr->second].push_back(itr->first);
    }
    
  }
  return 0;
}