#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
printf("请输入一个整数");
int n=0;
int i=0;
int sum=0;
scanf ("%d",&n);
if ((0<=n)&&(n<=100))
{
	for (i=0;i<=n;i++)
	{
		sum+=i;
		
    } 
	
	printf ("sum=%d",sum);
	
	
	
}
	
	
	
	
	
	
	
	
	
	return 0;
}
