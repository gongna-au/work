#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
void selectSort(int a[],int n);  //ѡ������ 
void display(int a[],int n);     //�������Ԫ�� 

int main(void)
{
	int a[10] = {4,3,1,2,5,6,8,9,10,7};
	selectSort(a,10); 
	display(a,10);
	
	return 0;	
}

void selectSort(int *a,int n)
{
	if(n <= 1)  return;    //�ݹ����
	
	int k = 0;             //��Сֵ�������±� 
	
	for(int i = 1;i < n;i++) 
	{
		if(a[i] < a[k]) k = i;
	}
	
	if( k != 0 )            //a[0]��a[k]���� 
	{
		int t = a[0];
		a[0] = a[k];
		a[k] = t;
	}
	selectSort(a+1,n-1);    //�ݹ���� 
	
	return ;
}

void display(int a[],int n)
{
	for(int i = 0;i < n;i++)
	{
		printf("%d ",a[i]) ;
	}
}
	return 0;
}
