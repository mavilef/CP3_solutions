#include <iostream>
  
using namespace std;

int main()
{
  int32_t case_num = 1;
  int32_t t;
  cin >> t;
  while(t--)
  {
    int32_t num_calls;
    cin >> num_calls;
    int32_t mile= 0, juice=0;
    while(num_calls--)
    {
      int32_t call_duration;
      cin >> call_duration;
      mile+= (call_duration/30)*10 + 10;
      juice+= (call_duration/60)*15 + 15;
    }

    cout << "Case " << case_num++ << ": ";
    if( mile > juice)
    { 
      cout << "Juice " << juice;
    }else if(mile < juice){
      cout << "Mile " << mile;
    }else{ 
      cout << "Mile Juice " << mile;
    }

    cout << endl;
  }
}
