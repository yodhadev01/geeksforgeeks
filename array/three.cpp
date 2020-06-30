// Kadane's Algorithm 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    vector<int> v;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        v.push_back(b);
    }
    int st=0,s=0,sum=v[0], max=v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]>0){
            st = i;
            s = i;
            sum=v[i];
            max=v[i];
            break;
        }
        if(v[i]>sum){
            sum=v[i];
            max=v[i];
            st=i;
            s=i;
        }
    }

    for(int i=s+1; i<v.size(); i++){
        
        if(sum<0 && v[i]>=0){
            sum=v[i];
            s=i;
        }else{

        if(sum>=0){
            sum+=v[i];
        }}

        if(max>sum){
            max=sum;
            st=s;
        }
        cout<<sum<<endl;
    }
    cout<<sum<<" "<<st;
    return 0;
}