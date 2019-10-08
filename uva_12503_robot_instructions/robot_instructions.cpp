#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int32_t n_cases;
    int32_t n_intructions;

    cin >> n_cases;
    while(n_cases--)
    {
        cin >> n_intructions;
        vector<int16_t> instructions;
        int32_t pos = 0;
        string instruction;
        while(n_intructions--)
        {
            cin >> instruction;
            if (instruction[0] == 'R')
            {
                pos++;
                instructions.push_back(1);
            }
            else if(instruction[0] == 'L')
            {
                pos--;
                instructions.push_back(-1);
            }
            else
            {
                cin >> instruction;
                int32_t index;
                cin >> index;
                pos += instructions[index-1];
                instructions.push_back(instructions[index-1]);
            }
        }
        cout << pos << endl;
    }

    return 0;
}