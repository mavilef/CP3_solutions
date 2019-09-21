#include <stdio.h>

using namespace std;

int main()
{
	char c;
	bool right = false;	
	while (scanf("%c", &c) != EOF)
	{
		if (c == '"')
		{
			if (right == false)
			{
				printf("``");
			}
			else
			{
				printf("''");
			}
			right = !right;
		}
		else
		{
			printf("%c", c);
		}
	}
	return 0;

}
