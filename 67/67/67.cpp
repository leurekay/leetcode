#include<iostream>
using namespace std;
int length(char *a);
char* addBinary(char* a, char* b) {
	int len_a = length(a);
	int len_b = length(b);
	int len_out = len_b;
	if (len_a>len_b)
	{
		len_out = len_b;
	}
	len_out += 1;
	int temp = 0;
	//int out[len_out] = { 0 };
	//int aint[len_out] = { 0 };
	//int bint[len_out] = { 0 };
	int *out = new int[len_out];
	int *aint = new int[len_out];
	int *bint = new int[len_out];
	for (int i = 0; i < len_out; i++)
	{
		out[i] = 0;
		aint[i] = 0;
		bint[i] = 0;
	}
	for (int i = 0; i<len_a; i++)
	{
		aint[len_a - 1 - i] = a[i] - ('1' - 1);
	}
	for (int i = 0; i<len_b; i++)
	{
		bint[len_b - 1 - i] = b[i] - ('1' - 1);
	}
	int ii = 0;
	for (ii = 0; ii<len_out; ii++)
	{
		out[ii] = aint[ii] + bint[ii] + temp;
		if (out[ii] = 0)break;
		temp = out[ii] / 2;
		out[ii] = out[ii] % 2;
	}
	//char outchar[ii];
	char *outchar = new char[ii];
	for (int i = 0; i<ii; i++)
	{
		outchar[i] = out[ii - 1 - i] + 48;
	}
	return outchar;


}
int length(char *a)
{
	int len = 0;
	int i = 0;
	while (a[i] != '\0')
	{
		len += 1;
	}
	return len;
}
int main()
{
	char x[] = "11";
	char y[] = "1";
	char *p = addBinary(x, y);
	cout << p[0] << p[1];
	return 0;
}