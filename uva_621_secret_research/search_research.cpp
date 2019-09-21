#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int32_t n_cases;
	string temp;
	char res;
	cin >> n_cases;
	while (cin >> temp, n_cases--)
	{
		res = !temp.compare("1") ||
		 	  !temp.compare("4") ||
			  !temp.compare("78") ? '+' :
			  temp[temp.length() - 1]  == '5' &&
			  temp[temp.length() - 2] == '3' ? '-' :
			  temp[0] == '9' && 
			  temp[temp.length() - 1] == '4' ? '*' :
			  temp[0] == '1' && temp[1] == '9' && temp[2] == '0' ?
			  '?' : '+';

		cout << res << '\n';
	}

	return 0;
}