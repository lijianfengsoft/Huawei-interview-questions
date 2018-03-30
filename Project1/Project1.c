#include<stdio.h>
#include <string.h>
#include<stdlib.h>

int main(void)
{
	int n, i=0;
	int num = 0;
	char c;
	char String[100];
	char *p = String;

	gets(String);
	n=strlen(String);
	printf("%d\r\n", n);
	for (i = n; i > 0; i--)
	{
		c = *(p + i-1);
		if (c != ' ')
		{
			printf("%c\r\n", c);
			num++;
		}
		else
			break;
	}

	printf("%d\r\n", num);

	printf("changes!");

	system("pause");
	return 0;
}