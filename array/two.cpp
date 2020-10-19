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





// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int, vector< pair<string, int> > > input;
//     int n,a,avilable = 0;
//     string sub;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a;
//         if(a != -1){
//             avilable++;
//             cin>>sub;
//             if(input.find(a) == input.end()){
//                 vector<pair<string, int> > v;
//                 v.push_back(pair<string, int>(sub, avilable));
//                 input[a] = v;
//             }else{
//                 input[a].push_back(pair<string, int>(sub, avilable));
//             }
//         }else{
//             sub = input.begin()->second[input.begin()->second.size()-1].first;
//             a = input.begin()->second[input.begin()->second.size()-1].second;
//             cout<<avilable-a<<" "<<sub<<endl;
//             if(input.begin()->second.size() <= 1){
//                 input.erase(input.begin()->first);
//             }else{
//                 input.begin()->second.pop_back();
//             }
//             avilable--;
//         }
//     }

//     return 0;
// }