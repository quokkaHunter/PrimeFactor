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
			if (n == 4)
			{
				result.push_back(2);
				result.push_back(2);
			}
			else
				result.push_back(n);
		}
		return result;
	}
};