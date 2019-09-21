#include <iostream>

using namespace std;

int main()
{
	int32_t n_cases;
	scanf("%d", &n_cases);

	while (n_cases--)
	{
		string temp;
		cin >> temp;

		if (temp.length() == 3)
		{
			if (temp[0] == 'o' && temp[1] == 'n' ||
			    temp[0] == 'o' && temp[2] == 'e' ||
			    temp[1] == 'n' && temp[2] == 'e')
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "2" << endl;
			}
		}
		else{
			cout << "3" << endl;
		}
		
	}

	return 0;
}

