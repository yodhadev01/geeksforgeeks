#include <bits/stdc++.h> 
 
using namespace std;
 
int main()
{
    long long int t,x,y,z,a,b,q, lastStartUpdatedPos, lastStartTravrsed;
	string s;
	bool extra = false;
    cin>>t;
    while(t--){
		cin>>x>>y;
		cin>>s;
		q = 0;
		extra = false;
		lastStartUpdatedPos = lastStartTravrsed = 0;
		for(int i=0;s[i]!='\0';i++){
			// cout<<s[i]<<" ";
			if(s[i] == '*' && !extra){
				q++;
				s[i] = 'x';
				// cout<<"first-"<<i<<" "<<lastStartUpdatedPos<<endl;
				extra = true;
				lastStartUpdatedPos = i;
				lastStartTravrsed = i;
			} else if (extra){
				if (i-lastStartUpdatedPos>y && s[lastStartTravrsed] == '*'){
					// cout<<i<<" "<<lastStartUpdatedPos<<endl;
					lastStartUpdatedPos = lastStartTravrsed;
					s[lastStartTravrsed] = 'x';
					lastStartTravrsed = i;
					q++;
				} else if(s[i] == '*'){
					lastStartTravrsed = i;
				}
			}
		}
		if (s[lastStartTravrsed] == '*'){
			q++;
			s[lastStartTravrsed] = 'x';
		}
		cout<<q<<endl;

    }
    return 0;
}