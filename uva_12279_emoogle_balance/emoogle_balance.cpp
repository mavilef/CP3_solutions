#include <iostream>

using namespace std;

int main()
{
    int32_t n_case = 1;
    int32_t args = 0;
    while(cin >> args, args != 0)
    {
        int32_t o_b = 0;
        int32_t aux;
        while (args--)
        {
            cin >> aux;
            o_b += (aux == 0 ? -1 : +1);
        }
        cout << "Case " << n_case++ << ": " << o_b << endl;
    }

    return 0;
}