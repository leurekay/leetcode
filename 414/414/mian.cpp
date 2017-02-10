#include<iostream>
#include<vector>
using namespace std;
int thirdMax(vector<int>& nums)
{
	int flag = 0;
	int temp[] = { -214748364,-214748364,-214748364 };
	vector<int>::iterator iter = nums.begin();
	for (; iter != nums.end(); iter++)
	{
		if (*iter > temp[2])
		{
			if (*iter < temp[1])
			{
				temp[2] = *iter;
				flag++;
			}
			if ((*iter > temp[1]) && (*iter < temp[0]))
			{
				temp[2] = temp[1];
				temp[1] = *iter;
				flag++;
			}
			if (*iter > temp[0])
			{
				temp[2] = temp[1];
				temp[1] = temp[0];
				temp[0] = *iter;
				flag++;
			}
		}
	}
	if (flag < 3)
	{
		if ((temp[0] >= temp[2]) && (temp[0] >= temp[1]))
		{
			return temp[0];
		}
		if ((temp[1] >= temp[0]) && (temp[1] >= temp[2]))
		{
			return temp[1];
		}
		if ((temp[2] >= temp[0]) && (temp[2] >= temp[1]))
		{
			return temp[2];
		}
	}
	return temp[2];
}
int main()
{
	//int test[] = { 7,9 };
	vector<int> test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(-3);
	//test.push_back(7);
	cout << thirdMax(test)<<endl;
	return 0;
}