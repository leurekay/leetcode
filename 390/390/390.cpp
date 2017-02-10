#include<iostream>
using namespace std;
class Solution
{
public:
	int lastRemaining(int n)
	{
		int size = n;
		int order= 1;
		int*arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = 1;
		}
		int ret;
		while(true)
		{
			int cnt = 0;
			if (order == 1)
			{
				order = -1;
				int control = 1;
				for (int i = 0; i < size; i++)
				{
					if (arr[i] == 1)
					{
						if (control == 1)
						{
							control = 0;
							arr[i] = -1;
						}
						else
						{
							control = 1;
							ret = i;
							cnt++;
						}
							
					}
				}
			
			}
			else
			{
				order = 1;
				int control = 1;
				for (int i = size-1; i >=0; i--)
				{
					if (arr[i] == 1)
					{
						if (control == 1)
						{
							control = 0;
							arr[i] = -1;
						}
						else
						{
							control = 1;
							ret = i;
							cnt++;
						}

					}
				}

			}
			if (cnt == 1)break;
		}
		return ret+1;
	}
};
int main()
{
	Solution s;
	int a[] = { 1, 2, 3, 4 ,5};
	cout << s.lastRemaining(9) << endl;
	int *temp=s.reduce(a, 5, 1);
	cout << temp[0] << temp[1] << temp[2]<<endl;	
	return 0;
}