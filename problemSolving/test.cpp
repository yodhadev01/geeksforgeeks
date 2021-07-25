/* -- author:  Devansh_0007  (CF) -- */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"
#define vi vector<int>
#define vll vector<ll>
#define all(n) n.begin(), n.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define mem(a) memset(a, 1e9 + 7, sizeof(a));
ll gcd(ll a, ll b){ return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b){ return a / gcd(a, b) * b; }
double PI = 3.1415926536;
int inf = 1e9 + 7;
ll MAX(ll a, ll b) { return a > b ? a : b; }
ll MIN(ll a, ll b) { return a > b ? b : a; }
inline bool ispalindrome(string s){
  int n=s.length(),i=0,j=n-1;
  while(i <=j){
    if(s[i] != s[j])return false;
    i++,j--;
  }
  return true;
}
inline bool isprime(ll n){
  if(n%2 == 0)
    return false;
  for(int i=3;i*i<=n;i+=2)
    if(n%i == 0)
      return false;
  return true;
}
 
void solve(){
  int n;
  cin>>n;
  vector<int>cnt(3);
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		cnt[x%3]++;
	}
	cout<<cnt[0]<<" "<<cnt[1]<<" "<<cnt[2]<<endl;
	int ans = 0;
	int need = n/3;
	while(cnt[0]!=need||cnt[1]!=need||cnt[2]!=need){
		for(int i=0;i<3;i++){
			if(cnt[i]>need){
				ans += cnt[i]-need;
				cnt[(i+1)%3] += cnt[i]-need;
				cnt[i] = need;
			}
		}
	}
	cout << ans;
}
 
int main(){
  /* freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);*/
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  cin >> t;
  for(int i=1;i<=t;i++){
    // cout<<"Case #"<<i<<": ";
    solve();
    cout<<endl;
  }
  return 0;
}