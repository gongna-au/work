#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const int MAX=3001;  //���г���max
int main(void)
{
	int a[MAX],b[MAX];   //a�����������������ֵ�����������������ֵ���в���
	int n,temp;
	scanf("%d",&n);
	int i,j;
	if(n==1)
	{     //���ֻ��һ��������ֱ�����
		printf("Jolly");
		return 0;
	}
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n-1;i++)
	{  //b�������a��������ֵ֮��ľ���ֵ
		b[i]=abs(a[i]-a[i+1]);
	}
	for(i=0;i<n-1;i++)    //��b�����Ԫ�ؽ�������
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
	{  //�ж��ź���������ǲ��ǵȲ�����
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
