#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,k=0,j=10,i;
	
	for(i=j*j;i<1000;j++,i=j*j)
	{
		if(i%10==i/10%10||i%10==i/100||i/100==i/10%10)
		{
			a[++k]=i;
		} 		
			
	}
	scanf("%d",&n);
	printf("%d\n",a[n]);





	return 0;
}
