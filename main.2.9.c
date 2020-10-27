#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int *p,*q,**pp;
    	p = (int*) malloc( 3*sizeof(int) );
    	for(int i = 0;i < 3;i++)
    	{
	    *(p+i) = i+1;
    	}
    	q = (int*) malloc( 4*sizeof(int) );
    	for(int i = 0;i < 3;i++)
    	{
	    *(q+i) = i+5;
    	}
    
    	pp = (int **) malloc(2*sizeof(int*));
    	*pp++ = p;
    	*pp = q;
    	printf("%d,%d\n",*(*(pp+1)+1),**(--pp));
    	free(p);free(q);free(pp);
	return 0;
}
