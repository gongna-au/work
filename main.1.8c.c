#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// hj,hr,sl,ke�ֱ���1��2��3��4���� 
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
			        	printf("A����"); printterm(A);
			        	printf("B����"); printterm(B);
			       	printf("C����"); printterm(C);
			        	printf("D����"); printterm(D);		            	        		   
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
		case 1: printf("�����\n"); break;
		case 2: printf("���˶�\n"); break;
		case 3: printf("ɭ���Ƕ�\n"); break;
		case 4: printf("�������˶�\n"); break;
	}
}
	
	
	
	
	
	
	
	return 0;
}
