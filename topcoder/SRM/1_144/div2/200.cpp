#include<bits/stdc++.h>

using namespace std;

class Time
{
public:
    string out;
    string whatTime(int in)
    {
        int sec = in % 60;
        int min = (in / 60) % 60;
        int hr = (in / 3600) % 3600;
        string out = to_string(hr) + ':' + to_string(min) + ':' + to_string(sec);
        return out;
    }
};

//int main()
//{
//    Time t;
//    cout << t.whatTime(5436);
//	return 0;
//}