#include<bits/stdc++.h>

using namespace std;

int cf_966A()
{
	int denom[4] = { 100, 20, 10, 5 };
	long n;
	int i = 0, count = 0;
	cin >> n;
	for (int a : denom)
	{
		long i = n / a;
		if (i > 0)
		{
			count += i;
			n -= i * a;
		}
	}
	count += n;
	cout << count;

	return 0;
}