#include <iostream>

using namespace std;

int main()
{
	int32_t n_c;
	while (scanf("%d", &n_c), n_c != 0)
	{
		int32_t dx, dy;
		scanf("%d %d", &dx, &dy);
		while (n_c--)
		{
			int32_t x, y;
			scanf("%d %d ", &x, &y);
			if (x > dx && y > dy)
			{
				cout << "NE" << endl;
			}
			else if (x > dx && y < dy)
			{
				cout << "SE" << endl;
			}
			else if (x < dx && y > dy)
			{
				cout << "NO" << endl;
			}
			else if ( x < dx && y < dy)
			{
				cout << "SO" << endl;
			}
			else
			{
				cout << "divisa" << endl;
			}
		}
	}
	return 0;
}
