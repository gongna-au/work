#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	double t=1,s=1;
	
	scanf("%d",&n);	
	for(i=1;i<=n;i++)
	{
		t=t*i;
		s+=1/t;
	}
	printf("%.10f",s);
	return 0;
	
}
