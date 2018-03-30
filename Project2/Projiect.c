#include<stdio.h>
#include<string.h>

int main(void)
{
	char Str[1000];
	char *p = Str;
	char c,c1;
	int n,i,num=0;

	gets(Str);
	c = getchar();
	n = strlen(Str);

	if (c > 64 && c < 91)
		c += 32;

	for (i = 0; i < n; i++)
	{
		c1 = *(p + i);
		if (c1 > 64 && c1 < 91)
			c1 += 32;
		if (c == c1)
			num++;
	}

	printf("%d\r\n", num);

	system("pause");

	return 0;

}