#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, number, s, minimallength;
	int heights[100], start[100], finish[100], length[100];
	cout << "Write the number of mountains" << endl;
	cin >> n;
	int l = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Write the height of the mountain" << endl;
		cin >> heights[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (heights[i] == heights[i + 1])
		{
			s = s + 1;
		}

		if (heights[i] < heights[i - 1] && s > 1 && heights[i - s - 1] < heights[i - 1])

		{
			start[l] = i - s - 1;
			finish[l] = i;
			length[l] = s + 2;
			s = 1;
			l = l + 1;
		}

		else

		{
			s = 1;
		}
		minimallength = 100000;

		for (int i = 0; i < l; i++)
		{
			if (length[i] < minimallength)
			{
				minimallength = length[i];
				number = i;
			}
		}

		cout << start[number] << "- start" << endl;
		cout << finish[number] << " - finish" << endl;
	}
	system("Pause");
	return 0;
}