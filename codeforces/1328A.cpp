#include <bits/stdc++.h>

using namespace std;

int cf_1328A()
{
	long t, a, b;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		cout << (a % b > 0 ? b - a % b : 0) << endl;
	}

	return 0;
}