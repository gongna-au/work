
int main(void)
{
	int x,max,min,n = 0;
	double sum = 0;
	
	printf("������������-1�������\n");
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
	printf("�����Ϊ��%d\n",max);
	printf("��С��Ϊ��%d\n",min);
	printf("ƽ����Ϊ��%.2f\n",sum/n);
	
	return 0;	
}
