#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

ll sum(ll n) { return n * (n + 1) / 2; }

int main()
{
	ld t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		ll sumToN = sum(n);
		if (sumToN % 2 != 0)
			cout << 0 << endl;
		else
		{
			// solving n² + n - 2k = 0; where k is sumToN
			ld root = (sqrtl(1ul + 4 * sumToN) - 1.0) / 2.0;
			ll ans = n - root;
			if (sum(root) == sumToN / 2)
				ans = sum(root - 1) + sum(n - root - 1);
			cout << (ll)ans << endl;
		}
	}
	return 0;
}