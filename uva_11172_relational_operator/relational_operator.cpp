#include  <iostream>

using namespace std;

int main(){
	int32_t n;
	scanf("%d", &n);
	while (n--)
	{
		int32_t a,b;
		scanf("%d %d", &a, &b);
		if (a>b)
		{
			printf(">\n");
		}
		else if (a<b)
		{
			printf("<\n");
		}
		else
		{
			printf("=\n");
		}
	}
	return 0;
}

