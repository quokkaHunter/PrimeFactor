﻿#include <vector>

using namespace std;

class PrimeFactor
{
public:
	vector<int> op(int n)
	{
		vector<int> result = {};
		if (n == 2)
			result.push_back(2);
		return result;
	}
};