// Count the triplets 
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, vector< pair<int, int> > > mapArr;
    vector<int> arr;
    int a,b;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>b;
        arr.push_back(b);
    }
    for(int i=0; i<a; i++){
        // vector<pair<int, int> > v;
        for(int j=i+1; j<a; j++){
            if(mapArr.find(arr[i]+arr[j]) != mapArr.end()){
                mapArr[arr[i]+arr[j]].push_back(pair<int, int>(arr[i], arr[j]));
            }else{
                vector<pair<int, int> > v;
                v.push_back(pair<int, int>(arr[i], arr[j]));
                mapArr[arr[i]+arr[j]] = v;
            }
        }
    }
    for(int i=0; i<a; i++){
        if(mapArr.find(arr[i]) != mapArr.end() && mapArr[arr[i]].size()){
            cout<<arr[i]<<" ";
            cout<<mapArr[arr[i]][0].first<<" "<<mapArr[arr[i]][0].second<<endl;
            mapArr[arr[i]].erase(mapArr[arr[i]].begin());
        }
    }
    // map<int, vector< pair<int, int> > >::iterator itr;  
    // for (itr = mapArr.begin(); itr != mapArr.end(); ++itr) { 
    //     cout <<itr->first<<endl;
    //     for(int i=0; i<itr->second.size(); i++){
    //         pair<int, int> p = itr->second[i];
    //         cout<<p.first<<" "<<p.second<<" ";
    //     }
    //     cout<<endl; 
    // } 
    // cout << endl;    
    return 0;
}