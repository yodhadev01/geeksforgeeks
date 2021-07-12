#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,a, new1, new2,flag;
  cin>>t;
  while(t--){
    cin>>n;
    vector<set< int> > vs;
    while(n--){
      cin>>a;
      new1 = a-1;
      new2 = a+1;
      flag=-1;
      for(int i = 0;i<vs.size();i++){
        if(vs[i].find(a) == vs[i].end() && vs[i].find(new1) == vs[i].end() && vs[i].find(new2) == vs[i].end()){
          flag = i;
        }
      }
      if(flag == -1){
        set<int> s;
        s.insert(a);
        vs.push_back(s);
      }else{
        vs[flag].insert(a);
      }
    }
    cout<<vs.size()<<endl;
  }
  return 0;
}