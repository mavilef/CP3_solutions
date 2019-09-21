#include <iostream>

using namespace std;

int sum_digits(int n);

int main()
{
    ios_base::sync_with_stdio(false);
    int32_t num;
    while (cin >> num, num != 0)
    {
        while (num > 9)
        {
            num = sum_digits(num);
        }
        cout << num << endl;

    }
    return 0;
}

int sum_digits(int n)
{
    int32_t sum = 0;
    while (n != 0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}