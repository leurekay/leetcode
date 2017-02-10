#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

class Solution 
{
public:
	int lengthOfLongestSubstring(string s) 
	{
		int strSize = s.size();
		const int charRange = 128;
		int list[charRange] = {0};
		int count = 0;
		int ret = 0;
		for (int i = 0; i<strSize; i++)
		{
			char elem = s[i];
			if (list[elem] == 0)
			{
				list[elem] = 1;
				count++;
			}
			else
			{
				int j=i-1;
				while (s[j]!=elem)
				{
					j--;
				}
				resetArray(list, charRange);
				for (int k = j + 1; k <= i; k++)
				{
					list[s[k]] = 1;
				}
				if (count > ret)
				{
					ret = count;
				}
				count = i-j;
				list[elem] = 1;
			}

		}
		if (count > ret)ret = count;
		return ret;
	}
private:
	void resetArray(int *array, int size)
	{
		for (int i = 0; i < size; i++)
		{
			array[i] = 0;
		}
	}
};
int main()
{
	Solution s;
	string test ;
	//cout << "enter a test string : ";
	//cin >> test;
	test = "dedg ";
	cout << "intput string : " << test << endl;
	cout<<"output: "<< s.lengthOfLongestSubstring(test) << endl;
	return 0;
}