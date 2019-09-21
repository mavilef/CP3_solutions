#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int32_t n_cases = 0;
    cin >> n_cases;
    while (n_cases--)
    {
        int32_t n_farmers = 0, area = 0, n_animals = 0, ef = 0;
        float sum = 0.0;
        cin >> n_farmers;
        while (n_farmers--)
        {
            cin >> area >> n_animals >> ef;
            sum += ef*area;
        }
        cout << sum << endl;
    }

    return 0;
}