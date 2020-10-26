#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// hj,hr,sl,ke分别用1，2，3，4代表 
	int A,B,C,D;
	int la,lb,lc,ld;
	
	for(A=1;A<=4;A++)
	{
	    for(B=1;B<=4;B++)
	    {	
		for(C=1;C<=4;C++)
		{
	             for(D=1;D<=4;D++)
		    {	
		        if(B!=A&&C!=A&&C!=B&&D!=A && D!=B && D!=C)
			{
		             lb=(C==4);
			    lc=(D!=3);
			    la=(B!=1);
			   if((A==4&&la&&!lb&&!lc) + (B==4&&lb&&!la&&!lc) + C==4&&lc&&!la&&!lb)==1)
			    {
			        	printf("A来自"); printterm(A);
			        	printf("B来自"); printterm(B);
			       	printf("C来自"); printterm(C);
			        	printf("D来自"); printterm(D);		            	        		   
 }
			} 	
		    }
		}
	    }
	} 
}
void printterm(int n)
{
	switch(n)
	{
		case 1: printf("火箭队\n"); break;
		case 2: printf("湖人队\n"); break;
		case 3: printf("森林狼队\n"); break;
		case 4: printf("凯尔特人队\n"); break;
	}
}
	
	
	
	
	
	
	
	return 0;
}
