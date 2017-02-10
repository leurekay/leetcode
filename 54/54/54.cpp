#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution 
{
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) 
	{
		int raw = matrix.size();
		int col = matrix[0].size();
	
	}
};
void initMatrix(vector<vector<int>>& matrix,int a,int b)
{
	int cnt = 1;
	matrix.resize(a);
	for (int i = 0; i < a; i++)
	{
		matrix[i].resize(b);
		for (int j = 0; j < b; j++)
		{
			matrix[i][j] = cnt++;
		}
	}
}
void printMatrix(vector<vector<int>> matrix)
{
	int a = matrix.size();
	int b = matrix[0].size();
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	
			
}
int main()
{
	int a = 5;
	int b = 4;
	vector<vector<int>>test;
	initMatrix(test, a, b);
	printMatrix(test);

	string s = "abcd";
	cout << s[6] << endl;
	return 0;
}