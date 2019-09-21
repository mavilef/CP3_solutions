#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int32_t t_cases = 0, k = 1;
    cin >> t_cases;
    while (t_cases--)
    {
        int32_t act_wall, n_walls, my_height;
        int32_t hj = 0, sj = 0;

        cin >> n_walls;
        n_walls--, cin >> my_height;

        while (n_walls--)
        {
            cin >> act_wall;
            my_height > act_wall ? sj++ : 
            my_height < act_wall ? hj++ : hj = hj;
            my_height = act_wall;
        }

        cout << "Case " << k++ << ": " << hj << " " << sj << endl;

    }

    return 0;
}