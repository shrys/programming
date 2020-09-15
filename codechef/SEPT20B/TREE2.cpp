#include<bits/stdc++.h>

using namespace std;

long long t, n, k;

int tree2()
{
	cin >> t;
	while (t--)
	{
		set<int> s;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> k, s.insert(k);
		cout << s.size() + ((*s.begin()) == 0 ? -1 : 0) << endl;
	}
	return 0;
}