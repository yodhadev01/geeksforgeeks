#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, a, min, n;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> n;
		map<int, int> m;
		vector<int> v;
		while (n--)
		{
			cin >> a;
			v.push_back(a);
			if (m.find(a) == m.end())
			{
				m[a] = 1;
			}
			else
			{
				m[a]++;
			};
		}
		min = -1;
		for (auto itr = m.begin(); itr != m.end(); itr++)
		{

			if (itr->second == 1)
			{
				min = itr->first;
				break;
			}
		}
		if (min == -1)
		{
			cout << -1 << endl;
		}
		else
		{
			for (int i = 0; i < v.size(); i++)
			{
				if (v[i] == min)
				{
					cout << i + 1 << endl;
					break;
				}
			}
		}
	}
	return 0;
}