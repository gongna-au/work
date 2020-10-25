#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>
int main(void)
{
	int N,k;
	scanf("%d %d",&N,&k);
	
	int i=1;
	double s,hprice=200;
	while(i<=20&&s<hprice)
	{
		i++;
		s=N*i;
		hprice*=(1+1.0*k/100);
		
	}
	if(i<=20) 
		printf("%d",i);
	else 
		printf("Impossible");
	return 0;
}
	
	
	
	
	
	
	return 0;
}
