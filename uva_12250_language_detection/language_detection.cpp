#include <iostream> 
#include <string> 

using namespace std;

int main ()
{
	string word;
	int32_t casenum = 0;
	while(cin >> word , word.compare("#") != 0)
	{
		printf("Case %d: ", ++casenum);
		if (!word.compare("HELLO"))
		{
			printf("ENGLISH\n");
		}
		else if (!word.compare("HOLA"))
		{
			printf("SPANISH\n");	
		}
		else if (!word.compare("HALLO"))
		{
			printf("GERMAN\n");
		}
		else if (!word.compare("BONJOUR"))
		{
			printf("FRENCH\n");
		}
		else if (!word.compare("CIAO"))
	       	{
			printf("ITALIAN\n");
	       	}
		else if (!word.compare("ZDRAVSTVUJTE"))
	       	{
			printf("RUSSIAN\n");
	       	}
		else{
			printf("UNKNOWN\n");
		}
	}
	return 0;
}
