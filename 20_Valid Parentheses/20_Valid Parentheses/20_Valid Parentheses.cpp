#include <iostream>
#include<string>
#include<stack>
#include<stdio.h>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack <int >stackObject;
		int len = s.length();
		for (int i = 0; i < len; i++)
		{
			if (s[i] == '{' || s[i] == '[' || s[i] == '(')
			{
				stackObject.push(s[i]);
			}
			else
			{
				if (stackObject.size() == 0)return false;
				else
				{
					char temp = stackObject.top();
					if ((s[i] - temp) != 1 && (s[i] - temp) != 2)
					{
						return false;
					}
					else
					{
						stackObject.pop();
					}
				}
			}
		}
		if (stackObject.size() == 0)return true;
		else return false;
	}
};

int main()
{
	string test = "()";
	for (int i = 0; i < test.length(); i++)
	{
		printf("int--%d,  char--%c\n", test[i], test[i]);
	}
	//int a = test[5] - test[0];
	//cout << a << endl;
	Solution solution;
	cout << solution.isValid(test) << endl;
	return 0;
}