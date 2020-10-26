#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int main(void)
{
    char str[1500];
    scanf("%s",str);
    
    int a[26] = {0};
    int len = strlen(str);
    
    for(int i = 0;i < len;i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
    	{
    	    a[str[i]-'a']++;    //统计字母出现的次数 
        }
    }
     
    for(int i = 0;i < 26;i++)       //输出结果 
        for(int j = 0;j < a[i];j++)
           printf("%c",i+'a');
          
	
	
	
	return 0;
}
