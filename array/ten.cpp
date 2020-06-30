//Equilibrium point 
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
    eq=v[0];
    sum-=v[0];
    b=0;
    for(int i=1; i<v.size();i++){
        sum-=v[i];
        if(eq==sum){
            cout<<i+1;
            b=1;
            break;
        }
        eq+=v[i];
    }
    if(!b){
        cout<<"not found";
    }
    return 0;
}