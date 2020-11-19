#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int m, n, temp, i;

	printf("Enter two integers¡G");
	scanf_s("%d%d", &m, &n);
	if (m < n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	for (i = m; i > 0; i++)
	{
		if (i%m == 0 && i%n == 0)
		{
			printf("The LCW of %d and %d is¡G %d\n", m, n, i);
			break;
		}
	}
	system("pause");
	return 0;
}