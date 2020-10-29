#include <stdio.h>

void p(int);

int main(void)
{
	int n;

	printf("请输入一个整数：");
	scanf("%d", &n);

	p(n);
}

void p(int n)
{
	if (n / 10 == 0)
	{
		printf("%d ", n);
		return;
	}
	p(n / 10);
	printf("%d ", n % 10);
}
