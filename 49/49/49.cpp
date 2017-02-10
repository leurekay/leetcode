#include<iostream>
#include <string>
#include<vector>
using namespace std;
bool sameElements(string a, string b)
{
	if (a.length() != b.length())
	{
		return false;
	}
	else
	{
		int len = a.length();
		int temp;
		for (int i = 0; i < len; i++)
		{
			int j;
			for (j = i; j <= len; j++)
			{
				if (j == len)return false;
				if (a[i] == b[j])break;
			}
			if (i != j)
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}

		}
		return true;

	}
}

class Solution
{
public:
	bool sameElements(string a, string b)
	{
		if (a.length() != b.length())
		{
			return false;
		}
		else
		{
			int len = a.length();
			int temp;
			for (int i = 0; i < len; i++)
			{
				int j;
				for (j = i; j <= len; j++)
				{
					if (j == len)return false;
					if (a[i] == b[j])break;
				}
				if (i != j)
				{
					temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}

			}
			return true;

		}
	}
	vector<vector<string>> groupAnagrams(vector<string>& strs)
	{
		vector<vector<string>>ret;
		while (strs.size() > 0)
		{
			vector<string>temp;
			temp.push_back(strs[0]);
			int len = strs.size();
			for (int i = 1; i < len; i++)
			{
				if (sameElements(strs[0],strs[i]))
				{
					temp.push_back(strs[i]);
					strs.erase(strs.begin() + i);
					len--;
					i--;
				}
			}
			strs.erase(strs.begin());
			ret.push_back(temp);
			temp.empty();
		}
		return ret;
	}
};

int main()
{

	string a("abc");
	string b("cba");
	vector<string>s(5, "abc");
	s.push_back("defedc");
	cout << "is two strings has same elements?  " << sameElements(a, b) << endl;

	string testArray[] = { "abc","cba","ef" };
	vector<string>test(testArray, testArray + 3);
	Solution solution;
	vector<vector<string>>vec;
	vec = solution.groupAnagrams(test);
	return 0;
}