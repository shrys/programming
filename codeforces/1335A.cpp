#include <bits/stdc++.h>

using namespace std;

int cf_1335A()
{
	long long t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << to_string((long long)floor(n / 2) + (n % 2 == 0 ? -1 : 0)) << endl;
	}

	return 0;
}