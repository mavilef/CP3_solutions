#include <iostream>
#include  <algorithm>
using namespace std;

int main()
{
	int32_t n_cases, i = 0;
	scanf("%d", &n_cases);
	while (n_cases--)
	{
		int32_t res[3];	
		scanf("%d %d %d", &res[0], &res[1], &res[2]);
		sort(res, res+3);
		printf("Case %d: %d\n", ++i, res[1]);

	}
	return 0;
}
