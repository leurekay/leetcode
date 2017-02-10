#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) 
	{
		int len = nums.size();
		int start = 0;
		int end = len - 1;
		if (target <= nums[start])return 0;
		if (target > nums[end])return len;
		if (target == nums[end])return end;
		while ((end-start)>1)
		{
			int middle = (start + end) / 2;
			if (nums[middle] == target)return middle;
			else if (target < nums[middle])//pre_half zone
			{
				end = middle;
			}
			else //post_hlaf zone
			{
				start = middle;
			}
		}
		return start + 1;
	}
};
int main()
{
	vector<int>test = { 1, 3, 5 };
	int t = 5;
	Solution solution;
	int out=solution.searchInsert(test,t);
	cout << out << endl;
	return 0;
}