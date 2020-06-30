// Rearrange Array Alternately 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    vector<int> v;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    a=-1;
    b=v.size();
    for(int i=1;i<=v.size();i++){
        if(i%2!=0){
            b--;
            cout<<v[b]<<" ";
        }else{
            a++;
            cout<<v[a]<<" ";
        }
    }
    return 0;
}