#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	void setZeroes(vector<vector<int>>& matrix)
	{
		int m = matrix.size();
		int n = matrix[0].size();
		vector<vector<int>>box;
		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<n; j++)
			{
				if (matrix[i][j] == 0)
				{
					vector<int>temp;
					temp.push_back(i);
					temp.push_back(j);
					box.push_back(temp);
				}
			}
		}
		for (int i = 0; i<box.size(); i++)
		{
			oneElement(matrix, box[i][0], box[i][1]);
		}

	}
	void oneElement(vector<vector<int>>& matrix, int x, int y)
	{
		int m = matrix.size();
		int n = matrix[0].size();
		for (int i = 0; i<n; i++)
		{
			matrix[x][i] = 0;
		}
		for (int i = 0; i<m; i++)
		{
			matrix[i][y] = 0;
		}
	}
};
int main()
{
	return 0;
}