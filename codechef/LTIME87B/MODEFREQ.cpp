#include<bits/stdc++.h>

using namespace std;

int MODEFREQ()
{
	map<int, int> count, count2;
	int t, n, m;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			count[m]++;
		}
		for (auto it : count)
		{
			count2[it.second]++;
		}
		m = -1;
		for (auto it : count2)
			if (m < it.second)
			{
				m = it.second;
			}
		for (auto it : count2)
			if (m == it.second)
			{
				cout << it.first << endl;
				break;
			}
		count.clear();
		count2.clear();
	}
	return 0;
}