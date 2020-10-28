int zhenfen(int m,int n); 
int main()
{
	int n,*a,i,j,k;
	
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	k = 0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(zhenfen(a[i],a[j])) k++;
		}
	}
	printf("%d\n",k);
	free(a);
	
	return 0;	
}
int zhenfen(int m,int n)
{
	int r;
	while(m%n)
	{
		r = m%n;
		m = n;
		n = r;
	}
	if( n == 1) return 1;
	return 0;
}

