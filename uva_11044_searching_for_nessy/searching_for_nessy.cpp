#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	int32_t n_cases;
	scanf("%d", &n_cases);
	while(n_cases--)
	{
		float a,b;
		scanf("%f %f", &a, &b);
		printf("%d\n", int(ceil((a-2)/3)*ceil((b-2)/3)));
	}
	return 0;
}
