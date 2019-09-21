#include <iostream>

using namespace std;

int main()
{
	int32_t n_c;
	scanf("%d", &n_c);

	while (n_c--)
	{
		int32_t begin = 100, end = 0;
		int32_t k;
		scanf("%d", &k);
		while (k--)
		{
			int32_t temp;
			scanf("%d", &temp);
			if (temp < begin)
			{
				begin = temp;
			}
			if (temp > end)
			{
				end = temp;
			}
		}
		cout << (end-begin)*2 << endl;
	}
	return 0;
}
