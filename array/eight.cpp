// Inversion of Array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    vector<int> v;
    set<int> s;
    set<int>::iterator itr;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>b;
        v.push_back(b);
    }
    for(int i=v.size()-1;i>=0;i--){
        s.insert(v[i]);
        for(itr=s.begin();itr!=s.end();itr++){
            if(*itr<v[i]){
                cout<<v[i]<<" "<<*itr<<endl;
            }else{
                break;
            }
        }
    }
    return 0;
}