#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int32_t n_banks, n_debt;
    while (cin >> n_banks >> n_debt, (n_banks != 0 || n_debt != 0) )
    {
        vector<int32_t> bank_reserve(n_banks, 0);
        int32_t db = 0, cb = 0, dv = 0;
        for(int i = 0; i < n_banks; i++)
            cin >> bank_reserve[i];
        while (n_debt--)
        {
            cin >> db >> cb >> dv;
            bank_reserve[db-1] -= dv;
            bank_reserve[cb-1] += dv;
        }

        bool possible = true;

        for(vector<int32_t>::iterator it = bank_reserve.begin();
            it != bank_reserve.end(); it++)
        {
            if(*it < 0){
                possible = false;
                break;
            }
        }

        cout << (possible == true ? "S" : "N") << endl;
    }
    return 0;
}