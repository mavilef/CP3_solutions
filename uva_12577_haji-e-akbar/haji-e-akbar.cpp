#include <iostream>
#include <string>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);

    string input;
    int32_t i = 0;

    while (cin >> input, input.compare("*"))
    {
        string res = !input.compare("Hajj") ? "Hajj-e-Akbar" : "Hajj-e-Asghar";
        cout << "Case " << ++i << ": " << res << "\n";
    }


    return 0;
}