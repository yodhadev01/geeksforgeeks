//  Reverse array in groups
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b;
    vector<int> v;
    for(int i=0; i<a; i++){
        cin>>c;
        v.push_back(c);
    }
    int i=0,s=0,e=b-1,f=b-1;
    while(i<=v.size()-1){
        cout<<f<<" "<<s<<" "<<b<<endl;
        if(b+e>v.size()){
            e=v.size()-1;
            f=e;
        }
        for(;s<=e;){
            c=v[s];
            v[s]=v[e];
            v[e]=c;
            s++;
            e--;
        }
        s=f+1;
        e=f+b;
        f=e;
        i=s;
    }
    for(int k=0;k<v.size();k++){
        cout<<v[k]<<" ";
    }
    return 0;
}