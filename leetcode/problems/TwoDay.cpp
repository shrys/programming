#include<bits/stdc++.h>
#define ll long long

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> retArr;
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i; j < nums.size(); j++)
				if (nums[j] + nums[i] == target && i != j)
				{
					retArr.push_back(i), retArr.push_back(j);
					break;
				}
			if (retArr.size() == 2)
				break;
		}
		return retArr;
	}
};

//int main()
//{
//	Solution sol;
//	vector<int> v{ -1,-2,-3,-4,-5 };
//	sol.twoSum(v, -8);
//	return 0;
//}