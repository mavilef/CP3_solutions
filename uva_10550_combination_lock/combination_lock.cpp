#include <iostream>
#include <math.h>

using namespace std;

int32_t counter_clockwise(const int32_t& partida, const int32_t& chegada);
int32_t clockwise(const int32_t& partida, const int32_t& chegada);

int main()
{

	int32_t ini, n_1, n_2, n_3;
	while (scanf("%d %d %d %d", &ini, &n_1, &n_2, &n_3), 
		ini != 0 || n_1 != 0 || n_2 != 0 || n_3 != 0)
	{
		int32_t res = 0;
		res+= 120;
		res+= counter_clockwise(ini, n_1);
		res+= clockwise(n_1,n_2);
		res+= counter_clockwise(n_2, n_3);
		printf("%d\n", res*9);
	}
	return 0;
}

int32_t clockwise(const int32_t& partida, const int32_t& chegada)
{
	if (chegada >= partida)
	{
		return abs(partida - chegada);
	}
	else
	{
		return 40 - partida + chegada;
	}
}

int32_t counter_clockwise(const int32_t& partida, const int32_t& chegada)
{
	if (chegada <= partida)
	{
		return abs(partida - chegada);
	}
	else
	{
		return 40 + partida - chegada;
	}
}
