#include <iostream>

using namespace std;

inline uint16_t check_order(const int32_t a, const int32_t b)
{
	return a > b ? 1 : 2;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int32_t n_sequences = 0;

	cin >> n_sequences;
	cout << "Lumberjacks:" << endl;
	while (n_sequences--)
	{
		int16_t reference_order;
		int32_t ref_lamber_1, ref_lamber_2;

		cin >> ref_lamber_1 >> ref_lamber_2;
		reference_order = check_order(ref_lamber_1, ref_lamber_2);
		int32_t temp_lamber = ref_lamber_2;
		int32_t input_variable;
		bool ordered = true;
		for (size_t i = 0; i < 8; i++){
			cin >> input_variable;
			if (ordered == true && check_order(temp_lamber, input_variable) != reference_order)
			{
				ordered = false;
			}
			temp_lamber = input_variable;
		}
		cout << (ordered == true ? "Ordered" : "Unordered") << endl;
	}

	return 0;
}