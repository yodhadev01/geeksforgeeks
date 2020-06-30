// Leaders in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,sum=0,eq=0;
    cin>>a;
    vector<int> v;
    for(int i=0; i<a; i++){
        cin>>b;
        sum+=b;
        v.push_back(b);
    }
    int l = v[v.size()-1];
    cout<<l<<" ";
    for(int i=v.size()-1;i>=0;i--){
        if(l<v[i]){
            l=v[i];
            cout<<l<<" ";
        }
    }
    return 0;
}