#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int find_max_add(vector<int> vec, const int size, int* start, int* end)
{
	if (size == 0)
		return -100;

	int final_max = vec[0]>0?vec[0]:0;
	if (size != 1) {
		int cur_start = 0;
		int cur_end = 0;
		for (int i = 0; i < size; ++i) 
		{
			int cur_max = vec[i];
			cur_start = i;
			for (int j = i + 1; j < size; ++j)
			{
				cur_max += vec[j];
				if (cur_max > final_max)
				{
					final_max = cur_max;
					*start = cur_start;
					*end = j;
				}
			}
		}
		if (final_max < vec[size - 1])
		{
			final_max=vec[size - 1];
			*start = size - 1;
		}
	}
	return final_max;
}

int main()
{
	vector<int> vec;
	int val;
	while (cin >> val && val != -100) 
	{
		vec.push_back(val);
	}
	int start = 0;
	int end = 0;
	int found = find_max_add(vec, vec.size(), &start, &end);
	if (found != -100)
		cout << start << "->" << end << ":" << found << endl;
	else
		cout << 0 << endl;

	return 0;
}