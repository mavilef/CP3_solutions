#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	const int32_t side = 20;
	int32_t n_c, i = 0;
	cin >> n_c;
	while (n_c--)
	{
		int32_t a,b,c;
		cin >> a >> b >> c;
		if ( a > side || b > side || c > side)
		{
			cout << "Case "<< ++i << ": bad\n";
		}
		else
		{
			cout << "Case " << ++i << ": good\n";
		}
	}
	return 0;
}
