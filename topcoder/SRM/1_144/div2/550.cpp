#include<bits/stdc++.h>

using namespace std;

class BinaryCode
{
public:
	vector<string> decode(string str)
	{
		return vector<string> { d(str, '0'), d(str, '1') };
	}

private:
	string d(string str, char pos)
	{
		string none = "NONE";
		if (str.length() == 1)
		{
			return str == pos + "" ? str : none;
		}
		string ret(str.length() + 1, '0');
		ret[0] = pos;
		for (int i = 1; i <= str.length(); i++)
		{
			int a = str[i - 1];
			int b = ret[i - 1];
			int c = i == 1 ? 0 : (ret[i - 2] - '0');
			int val = a - b - c;
			if (val > 1 || val < 0)
			{
				return none;
			}
			ret[i] = val + '0';
		}

		return ret.substr(0, ret.length() - 1);
	}
};

//int main()
//{
//	BinaryCode b;
//	for (string a : vector<string>{ "123210122", "11", "22111", "123210120", "3", "12221112222221112221111111112221111" })
//	{
//		vector<string> c = b.decode(a);
//		cout << a << "->" << c[0] << " " << c[1] << endl;
//	}
//	return 0;
//}