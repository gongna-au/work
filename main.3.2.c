#include<stdio.h>
#include<math.h>
double nums[4];   //4¸öÔËËãÊı 
double eval(double a,double b,int op);
int calc(int n);
int main(void)
{	
	while(1)
	{
		scanf("%lf%lf%lf%lf",&nums[0],&nums[1],&nums[2],&nums[3]);
		if(nums[0] <= 0) break;
		printf("%s\n",calc(3)?"YES":"NO");
	}
	return 0;
} 

double eval(double a,double b,int op)  
{
	switch(op)
	{
		case 0:return a+b;
		case 1:return a-b;
		case 2:return a*b;
		case 3:return a/b;
		case 4:return b-a;
		case 5:return b/a;
	}
	return 0;
}
int calc(int n)
{
	int i,j,k;
	if(n == 0)
	{
		return (fabs(nums[0]-24)<1e-9);
	}
	for(i = 0;i < n;i++)
	{
		for(j = i+1;j <= n;j++)
		{
		    double a = nums[i];
		    double b = nums[j];
		    nums[j] = nums[n];
		    for(k = 0;k < 6;k++)
		    {
		        nums[i] = eval(a,b,k);
		        if(calc(n-1)) return 1;
		    }
		    nums[i] = a;
		    nums[j] = b;
		}
	}
	return 0;
}
