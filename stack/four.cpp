// L
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b;
    vector<vector<int> > v;
    map<int, vector< pair<int, int> > > mapArr;
    for(int i=0;i<a;i++){
        vector<int> v1;
        for(int j=0;j<b;j++){
            cin>>c;
            if(mapArr.find(c) != mapArr.end()){
                mapArr[c].push_back(pair<int, int>(i, j));
            }else{
                vector<pair<int, int> > v;
                v.push_back(pair<int, int>(i, j));
                mapArr[c] = v;
            }
            v1.push_back(c);
        }
        v.push_back(v1);
    }

    map<int, vector< pair<int, int> > >::iterator itr;  
    for (itr = mapArr.begin(); itr != mapArr.end(); ++itr) { 
        // cout <<itr->first<<endl;
        for(int i=0; i<itr->second.size(); i++){
            pair<int, int> p = itr->second[i];
            // cout<<p.first<<" "<<p.second<<" ";
            if(p.first>0 && v[p.first-1][p.second]==1){
                v[p.first-1][p.second] = itr->first+1;
                if(mapArr.find(itr->first+1) != mapArr.end()){
                    mapArr[itr->first+1].push_back(pair<int, int>(p.first-1, p.second));
                }else{
                    vector<pair<int, int> > v;
                    v.push_back(pair<int, int>(p.first-1, p.second));
                    mapArr[itr->first+1] = v;
                }
            }

            if(p.first<a-1 && v[p.first+1][p.second]==1){
                v[p.first+1][p.second] = itr->first+1;
                if(mapArr.find(itr->first+1) != mapArr.end()){
                    mapArr[itr->first+1].push_back(pair<int, int>(p.first+1, p.second));
                }else{
                    vector<pair<int, int> > v;
                    v.push_back(pair<int, int>(p.first+1, p.second));
                    mapArr[itr->first+1] = v;
                }
            }

            if(p.second<a-1 && v[p.first][p.second+1]==1){
                v[p.first][p.second+1] = itr->first+1;
                if(mapArr.find(itr->first+1) != mapArr.end()){
                    mapArr[itr->first+1].push_back(pair<int, int>(p.first, p.second+1));
                }else{
                    vector<pair<int, int> > v;
                    v.push_back(pair<int, int>(p.first, p.second+1));
                    mapArr[itr->first+1] = v;
                }
            }

            if(p.second>0 && v[p.first][p.second-1]==1){
                v[p.first][p.second-1] = itr->first+1;
                if(mapArr.find(itr->first+1) != mapArr.end()){
                    mapArr[itr->first+1].push_back(pair<int, int>(p.first, p.second-1));
                }else{
                    vector<pair<int, int> > v;
                    v.push_back(pair<int, int>(p.first, p.second-1));
                    mapArr[itr->first+1] = v;
                }
            }
        }
        cout<<endl; 
    } 
    cout << endl;

    return 0;
}