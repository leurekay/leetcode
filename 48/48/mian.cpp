#include <iostream>
#include <vector>
#include<ctime>
using namespace std;
/*
rotate matrix
*/
class Solution 
{
public:
	void rotate(vector<vector<int>>& m) 
	{
		int temp;
		int L = m.size();
		if (L % 2 == 0)
		{
			for (int i = 0; i < L / 2; i++)
			{
				for (int j = 0; j < L / 2; j++)
				{
					temp = m[i][j];
					m[i][j] = m[L - 1 - j][i];
					m[L - 1 - j][i] = m[L - 1 - i][L - 1 - j];
					m[L - 1 - i][L - 1 - j] = m[j][L - 1 - i];
					m[j][L - 1 - i] = temp;
				}
			}
		}
		else
		{
			for (int i = 0; i < (L+1) / 2; i++)
			{
				for (int j = 0; j < L / 2; j++)
				{
					temp = m[i][j];
					m[i][j] = m[L - 1 - j][i];
					m[L - 1 - j][i] = m[L - 1 - i][L - 1 - j];
					m[L - 1 - i][L - 1 - j] = m[j][L - 1 - i];
					m[j][L - 1 - i] = temp;
				}
			}
		}
	}
};
void printMatrix(vector<vector<int>> m)
{
	int L = m.size();
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < L; j++)
		{
			cout << m[i][j] << "  ";
		}
		cout << endl;
	}
}
int main()
{
	int L = 6;
	const int randRange = 88;
	srand(time(0));
	vector<vector<int>>m(L, vector<int>(L, 1));
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < L; j++)
		{
			m[i][j] = rand() % randRange+10;
		}
	}
	cout << "before rotation:" << endl;
	printMatrix(m);
	Solution s;
	s.rotate(m);
	cout << "after rotation:" << endl;
	printMatrix(m);
	return 0;
}