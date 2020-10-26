#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int main(void)
{
	char s[2000];
	char *p;
	gets(s);
	int len=strlen(s),f=0;
	p=strtok(s," ");
	while(p)
	{
		if(f)     printf(",");
		printf("%d",strlen(p));
		p=strtok(NULL," ");
		f=1;
	}
}

	return 0;
}
