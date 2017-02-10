#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

struct Interval
{
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) :start(s), end(e){}
};
class Solution 
{
public:
	Interval mergeIntervals(Interval a, Interval b)
	//if there is no overlapping interval betweenn a and b, then return [-1,1]
	{
		Interval temp(1,-1);
		if (a.start > b.end || b.start > a.end)
		{
			return temp;
		}
		else
		{
			if (a.start < b.start)
			{
				temp.start = a.start;
			}
			else
			{
				temp.start = b.start;
			}
			if (a.end > b.end)
			{
				temp.end = a.end;
			}
			else
			{
				temp.end = b.end;
			}
			return temp;
		}
	}
	vector<Interval> merge(vector<Interval>& intervals) 
	{
		vector<Interval>ret;
		int len = intervals.size();
		for (int i=0;i<len;i++)
		{
			Interval temp;
			int j;
			if (i = 0)
			{
				j = 1;
			}
			else
			{
				j = i - 1;
			}

			for (; j < len; j++)
			{
				if (i == j)continue;
				temp = mergeIntervals(intervals[i], intervals[j]);
				if((temp.end-temp.start)>=0)
				{
					intervals[i] = temp;
					intervals.erase(intervals.begin() + j);
					j--;
					len--;
				}
			}
		}
		return intervals;
	}

};
int main()
{
	Interval a(1, 5);
	Interval b(1,5);
	Interval out;
	Solution s;
	out=s.mergeIntervals(a, b);
	printf("[%d,%d]\n", out.start, out.end);
	return 0;
}