#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int32_t n_cases = 0, k;
    cin >> n_cases;
    k = n_cases;
    while (n_cases--)
    {
        bool possible = true;
        int32_t temp_dist = -1;
        int32_t y1 = 0, y2 = 0;
        int32_t num_col;
        cin >> num_col;
        while (num_col--)
        {
            cin >> y1 >> y2;
            if (possible == true)
            {
                int32_t distance = abs(y1 - y2);
                if (distance == temp_dist || temp_dist == -1)
                {
                    temp_dist = distance;
                }
                else
                {
                    possible = false;
                }
            }
        }

        cout << (k == n_cases + 1 ? "" : "\n\n") << (possible ? "yes" : "no");
        cout << (n_cases == 0 ? "\n" : "");
    }


    return 0;
}