#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int x =1, y=1 ;
    int m , n;
    m=n=1;
    switch (m)
    {   
        case 0 : x=x*2;
        case 1: {
            switch (n)
            {   case 1 : x=x*2;
                case 2 : y=y*2;break;
                case 3 : x++;

            }
          }
        case 2 : x++;y++;
        case 3 : x*=2;y*=2;break;
        default:x++;y++;
      }	
	
	
	
	
	return 0;
}
