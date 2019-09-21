#include <iostream>
#include <string>

using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	int32_t n_op, res = 0;
	cin >> n_op;
	while (n_op--)
	{
		string temp;
		cin >> temp;
		if(!temp.compare("donate"))
		{
			int32_t temp_val;
			cin >> temp_val;
			res += temp_val;
		}
		else
		{
			cout << res << "\n";
		}
	}
	return 0;
}
