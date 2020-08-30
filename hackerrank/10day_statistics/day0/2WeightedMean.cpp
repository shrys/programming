#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<long> x, w;
    long n, t, xw = 0, s = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> t, x.push_back(t);
    for (int i = 0; i < n; i++)
        cin >> t, w.push_back(t), xw += t * x[i], s += t;

    printf("%.1f", (float)xw / s);

	return 0;
}