#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, a;
	cin >> t;
	while (t--)
	{
		cin >> n;
		if (n == 1)
		{
		}
		else
		{
			for (int i = 1; i <= n; i++)
			{
				if (i + 1 > n)
				{
					cout << 1;
				}
				else
				{
					cout << i + 1 << " ";
				}
			}
		}

		cout << endl;
	}
	return 0;
}