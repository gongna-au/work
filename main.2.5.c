#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const int MAX=3001;  //序列长度max
int main(void)
{
	int a[MAX],b[MAX];   //a数组用来接收输入的值，数组用来对输入的值进行操作
	int n,temp;
	scanf("%d",&n);
	int i,j;
	if(n==1)
	{     //如果只有一个数，则直接输出
		printf("Jolly");
		return 0;
	}
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n-1;i++)
	{  //b数组等于a数组相邻值之差的绝对值
		b[i]=abs(a[i]-a[i+1]);
	}
	for(i=0;i<n-1;i++)    //对b数组的元素进行排序
{
	    for(j=i;j<n-1;j++)
		if(b[i]>b[j])
		{
		     temp=b[i];
		    b[i]=b[j];
		     b[j]=temp;
		}
}
	for(i=0;i<n-2;i++)
	{  //判断排好序的数组是不是等差数列
	    if(b[i+1]-b[i]==1)
		continue;
	    else
		break;
	}
	if(i==n-2)
	    printf("Jolly");
	else
	    printf("Not jolly");
	
	
	return 0;
}
