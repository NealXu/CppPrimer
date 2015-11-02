#ifndef _FIND_MAX_H_
#define _FIND_MAX_H_

#include <vector>

using namespace std;

template <typename comp>
const comp & findMax(const vector<comp> & v)
{
	int maxIdx = 0;
	for (int i = 1; i < v.size(); ++i)
	{
		if (v[maxIdx] < v[i])
		{
			maxIdx = i;
		}
	}

	return v[maxIdx];
}

#endif