#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int32_t clockwise(int32_t a, int32_t b);
int32_t counterclockwise(int32_t a, int32_t b);

int main()
{  
    std::ios_base::sync_with_stdio(false);
    int32_t a, b;

    while(cin >> a >> b, a != -1 && b != -1)
    {
        cout << min(clockwise(a,b), counterclockwise(a,b)) << endl;
    }

    return 0;
}

int32_t clockwise(int32_t a, int32_t b)
{
    if(a > b){
        return 100 - a + b;
    }else{
        return abs(a-b);
    }
}

int32_t counterclockwise(int32_t a, int32_t b)
{
    if(a < b){
        return a + 100 - b;
    }
    else
    {
        return abs(a-b);
    }
    
}