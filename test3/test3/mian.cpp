#include<iostream>
using namespace std;

void print(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int *p;
	int size=4;
	p = new int[size];
	for (int i = 0; i < size; i++)
	{
		p[i] = i+100;
	}
	print(p, size);
	int *temp = p;
	cout << "first address of array: " << p << endl;
	cout << "first element of array: " << *temp << endl;
	delete[]p;
	return 0;
}