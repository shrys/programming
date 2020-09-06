#include<bits/stdc++.h>

using namespace std;

int MeanMedianMode()
{
    int n, t, sum = 0;
    float median;
    vector<long> v;
    map<long, long> m;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t, v.push_back(t);
        sum += t;
        m[t]++;
    }

    int mode = m.begin()->first;
    int mode_freq = m.begin()->second;
    for (auto it : m)
    {
        if (it.second > mode_freq)
        {
            mode = it.first;
            mode_freq = it.second;
        }
    }

    sort(v.begin(), v.end());
    median = (v.size() % 2 == 0 ? ((float)v[v.size() / 2 - 1] + v[v.size() / 2]) / 2 : (float)v[v.size() / 2]);

    printf("%.1f\n", (float)sum / v.size());
    printf("%.1f\n", median);
    printf("%ld", mode);
	return 0;
}