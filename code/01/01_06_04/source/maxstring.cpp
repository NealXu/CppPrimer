#include <iostream>
#include <string>
#include <strings.h>
#include "findmax.h"

class CaseInsensitiveComparae
{
public:
	bool isLessThan(const string & lhs, const string & rhs) const
	{
		int minLen = lhs.size() < rhs.size() ? lhs.size() : rhs.size();
		return strncasecmp(lhs.c_str(), rhs.c_str(), minLen) < 0;
	}
};

int main()
{
	vector<string> v(3);
	v[0] = "ZERBA";
	v[1] = "alligator";
	v[2] = "crocodile";

	cout << findMax(v, CaseInsensitiveComparae()) << endl;
	return 0;
}