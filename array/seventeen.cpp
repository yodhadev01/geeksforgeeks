// Chocolate Distribution Problem   
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
    sort(v.begin(),v.end());
    c=MAX_INPUT;
    for(int i=b-1,j=0;i<a;i++,j++){
        if(c>v[i]-v[j]){
            c=v[i]-v[j];
        }
    }
    cout<<c;
    return 0;
}