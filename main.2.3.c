#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int huiwen(char *s);  //�жϴ�s�Ƿ�Ϊ���Ĵ� 
int  main(void)
{
    char s[501],subs[501];
    scanf("%s",s);
    int slen = strlen(s);
    int sublen = 2;         //�Ӵ����� 
    while(sublen <= slen)   //ö�ٳ������Ӵ� 
    {
        for(int i = 0;i <= slen-sublen;i++) 
	    {
	         strncpy(subs,s+i,sublen);   //С����Ϊsublen���Ӵ� 
	         if(huiwen(subs))    printf("%s\n",subs);
	    } 
	    sublen++;  
	}
    
    return 0;
}

int huiwen(char *s)
{
	int i = 0,j = strlen(s)-1;
	while(i <j && s[i] == s[j])
	{
	    i++;j--;
	}
	return i >= j;
}	return 0;
}
