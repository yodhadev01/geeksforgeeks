#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, a, min, q = 0, n, check, localsum;
	string s;
	cin >> t;
	while (t--)
	{
		cin >> n;
		map<int, vector<int>> m;
		q = 0;
		check = n;
		while (n--)
		{
			cin >> a;
			if (m.find(a) == m.end())
			{
				vector<int> v;
				v.push_back(q);
				m[a] = v;
			}
			else
			{
				m[a].push_back(q);
			};
			q++;
		}
		min = 100000000;
		localsum = -1;
		for (auto itr = m.begin(); itr != m.end(); itr++)
		{
			int totalnum = 1;
			for (int i = 1; i < itr->second.size(); i++)
			{
				if (itr->second[i - 1] + 1 != itr->second[i])
				{
					totalnum++;
				}
			}
			localsum = totalnum + 1;
			if (itr->second.size() == check)
			{
				min = 0;
				break;
			}
			if (itr->second[0] == 0)
			{
				localsum--;
			}
			if (itr->second[itr->second.size() - 1] == check - 1)
			{
				localsum--;
			}
			if (min > localsum)
			{
				min = localsum;
			}
		}
		if (min < 0)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << min << endl;
		}
	}
	return 0;
}