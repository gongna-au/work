#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


	int R,M,Y;
	double s;	
	
	scanf("%d %d %d",&R,&M,&Y);
	s=M;		
	while(Y--)
	{
		s=s*(1+1.0*R/100);		
	}	
	printf("%d\n",(int)s);



	return 0;
	}	
	
	
	
	
	
	

