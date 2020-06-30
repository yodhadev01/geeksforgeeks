//  Minimum Platform
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    vector<int> v1,v2;
    set<int> s;
    set<int>::iterator itr;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>b;
        v1.push_back(b);
    }
    for(int i=0; i<a; i++){
        cin>>b;
        v2.push_back(b);
    }
    b=1;
    for(int i=1;i<v1.size();i++){
        if(s.size()>b){
            b=s.size();
        }
        if(s.size()!=0){
            while(s.size()!=0 && *s.begin()<v2[i]){
                s.erase(s.begin());
            }
        }
        s.insert(v2[i]);
    }
    cout<<b<<endl;
    return 0;
}