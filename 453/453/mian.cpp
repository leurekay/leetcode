#include <iostream>
using namespace std;
int minMoves(int* nums, int numsSize) {
	int min = nums[0];
	int sum = 0;
	for (int i = 0; i<numsSize; i++)
	{
		sum = sum + nums[i];
		if (nums[i]<min)
		{
			min = nums[i];
		}

	}
	return sum - min*numsSize;
}
int main()
{
	cout << "please enter lenth:";
	int size;
	cin >> size;
	int *p = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
	cout << minMoves(p, size);
	return 0;
}