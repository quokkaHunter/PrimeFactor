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
				do
				{
					if (n % 2 == 0)
						result.push_back(2);
					n = n / 2;
				} while (n > 0);
			}
			else
				result.push_back(n);
		}
		return result;
	}
};