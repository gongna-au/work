#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
	return *(int *)a -*(int *)b;
}

int main(void)
{
	int x,n = 0;
	int a[100];	
	
	printf("输入正整数，-1输入结束\n");	
	while(1)
	{
		scanf("%d",&x);
		if(x<0) break;
		a[n++] = x;	
	}
	qsort(a,n,sizeof(a[0]),cmp);	
	printf("第二大的数为：%d\n",a[n-2]);
	
	return 0;	
}
