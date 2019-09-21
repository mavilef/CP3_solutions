#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int32_t n_c;
	scanf("%d", &n_c);
	while(n_c--)
	{
		float res;
		scanf("%f", &res);
		res *= 567;
		res /= 9;
		res += 7492;
		res *= 235;
		res /= 47;
		res -= 498;
		res /= 10;
		cout << abs(int(res))%10 << endl;
	}
	return 0;
}
