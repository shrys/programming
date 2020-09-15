#include<bits/stdc++.h>

using namespace std;

int adamatrix()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		int a[65][65];
		int c = 0;
		bool flag = false;
		cin >> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		for (int i = 0; i < n; i++)
		{
			if (!flag)
			{
				if (a[0][n - i - 1] > a[n - i - 1][0])
				{
					c++;
					flag = true;
				}
			}
			else
			{
				if (a[0][n - i - 1] < a[n - i - 1][0])
				{
					c++;
					flag = false;
				}
			}
		}
		cout << c << endl;
	}
	return 0;
}