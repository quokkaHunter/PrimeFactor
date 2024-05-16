#include <vector>

using namespace std;

class PrimeFactor
{
public:
	vector<int> op(int n)
	{
		vector<int> result = {};

		if (n < 2)
			return result;

		for (int i = 2; n > 1; i++)
		{
			while (n % i == 0)
			{
				result.push_back(i);
				n /= i;
			}
		}
		return result;
	}
};