// Stock buy and sell   
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    vector<int> v;
    for(int i=0; i<a; i++){
        cin>>b;
        v.push_back(b);
    }
    b=-1;
    for(int i=1;i<v.size();i++){
        if(b==-1 && v[i]>v[i-1]){
            cout<<i<<" ";
            b= i-1;
        }
        if(b!=-1 && v[i]<=v[i-1]){
            b=-1;
            cout<<i<<endl;
        }
    }
    if(b!=-1){
        cout<<v.size()<<endl;
    }
    return 0;
}