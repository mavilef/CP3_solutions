#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int32_t t_cases;
    cin >> t_cases;
    int32_t k = 0;
    while (t_cases--)
    {
        vector<pair<int, std::string> > websites;
        int32_t max = 0;
        for (int i = 0; i < 10; i++)
        {
            pair<int, string> aux;
            cin >> aux.second >> aux.first;
            websites.push_back(aux);
            max = (aux.first > max ? aux.first : max);
        }
        cout << "Case #" << ++k << ":" << endl;
        for (size_t i = 0; i < websites.size(); i++)
        {
            if (websites[i].first == max)
            {
                cout << websites[i].second << endl;
            }
        }

    }


    return 0;
}