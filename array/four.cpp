//Missing number in array  
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,t;

    cin>>t;
    while(t--){
    vector<long long int> v;
    cin>>a;
    for(long long int i=0; i<a-1; i++){
        cin>>b;
        v.push_back(b);
    }
    long long int real_sum=0, wanted_sum=0;
    for(long long int i=0; i<a-1; i++){
        real_sum+=v[i];
        wanted_sum+=(i+1);
    }
    wanted_sum+=a;
    cout<<abs(wanted_sum-real_sum)<<endl;
    }
    return 0;
}
