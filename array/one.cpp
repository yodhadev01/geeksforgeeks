// Subarray with given sum 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b;
    vector<int> arr;
    for(int i=0;i<a;i++){
        cin>>c;
        arr.push_back(c);
    }
    int start=0,end=0,sum=0,flag=0;
    for(;end<a;){
        if(arr[end]<b){
            sum=arr[end];
            end++;
            break;
        }
        start++;
        end++;
    }
    for(;end<a;){
        if(sum == b){
            flag=1;
            break;
        }
        if(sum<b){
            sum+=arr[end];
            end++;
        }else{
            sum-=arr[start];
            start++;
        }
        cout<<arr[end]<<" "<<arr[start]<<" "<<sum<<endl;
    }
    if(flag){
        cout<<start<<" "<<end;
    }else{
        cout<<"not found";
    }
    return 0;
}