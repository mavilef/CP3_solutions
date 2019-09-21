#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int32_t t_cases, k = 0;
	int32_t n_students;
	cin >> t_cases;
	while (t_cases--)
	{
		cin >> n_students;
		int32_t max = -1, student_speed;
		while (n_students--)
		{
			cin >> student_speed;
			max = student_speed > max ?
				student_speed : max;
		}
		cout << "Case " << ++k << ":" << " " << max << endl;
	}

	return 0;
}