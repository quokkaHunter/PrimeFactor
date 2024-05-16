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

		while (n % 2 == 0)
		{
			result.push_back(2);
			n /= 2;
		}
		while (n % 3 == 0)
		{
			result.push_back(3);
			n /= 3;
		}
		while (n % 5 == 0)
		{
			result.push_back(5);
			n /= 5;
		}
		while (n % 7 == 0)
		{
			result.push_back(7);
			n /= 7;
		}
		return result;
	}
};