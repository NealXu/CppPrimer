#ifndef _FIND_MAX_H_
#define _FIND_MAX_H_

#include <vector>

using namespace std;

template <typename object, typename comparator>
const object & findMax(const vector<object> & v, comparator comp)
{
	int maxIdx = 0;
	for (int i = 1; i < v.size(); ++i)
	{
		if (comp.isLessThan(v[maxIdx], v[i]))
		{
			maxIdx = i;
		}
	}

	return v[maxIdx];
}

#endif