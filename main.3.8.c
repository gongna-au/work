
int main(void)
{
	int x,max,min,n = 0;
	double sum = 0;
	
	printf("输入正整数，-1输入结束\n");
	scanf("%d",&x);
	max = min = x;
	while(1)
	{
		scanf("%d",&x);
		if(x<0) break;
		sum += x; 
		if(x>max) max =x;
		if(x<min) min = x; 
		n++;
	}
	printf("最大数为：%d\n",max);
	printf("最小数为：%d\n",min);
	printf("平均数为：%.2f\n",sum/n);
	
	return 0;	
}
