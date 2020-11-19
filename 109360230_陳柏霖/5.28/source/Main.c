#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char alphabet;
	printf("Enter an alphabet¡G");
	alphabet = getchar();
	if ((alphabet >= 65) && (alphabet <= 90))
	{
		printf("return¡G%c\n", alphabet + 32);
	}
	else if ((alphabet >= 97) && (alphabet <= 122))
	{
		printf("return¡G%c\n", alphabet - 32);
	}
	else
	{
		printf("plase enter the alphabet\n");
	}
	system("pause");
	return 0;
}