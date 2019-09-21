#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int32_t n_part = 0, budget = 0, hotels_available = 0, weeks = 0;

    while (cin >> n_part >> budget >> hotels_available >> weeks)
    {
        int32_t  cost = -1;
        int32_t cost_per_person = 0;
        while (hotels_available--)
        {
            int32_t k = weeks;
            cin >> cost_per_person;
            int32_t temp_vacancy = 0, vacancy = 0;
            while(k--)
            {
                cin >> temp_vacancy;
                if (temp_vacancy > vacancy){
                    vacancy = temp_vacancy;
                }
            }

            if ( vacancy >= n_part)
            {
                int32_t new_cost = n_part*cost_per_person;
                if(cost == -1 || new_cost < cost)
                {
                    cost = new_cost;
                }
            }
        }
        if (cost > budget || cost == -1)
        {
            cout << "stay home" << endl;
        }
        else
        {
            cout << cost << endl;
        }

    }

    return 0;
}