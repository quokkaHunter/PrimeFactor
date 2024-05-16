#include <vector>

using namespace std;

class PrimeFactor
{
public:
	vector<int> op(int n)
	{
		vector<int> result = {};
		if (n > 1)
		{
			result.push_back(n);
		}
		return result;
	}
};