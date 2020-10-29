int main(void)
{
	int a,b,c,d;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);	
	if(a>b)
	{
		int t;
		t = a;
		a = b;
		b = t;
	}
	if(b>c)
	{
		int t;
		t = b;
		b = c;
		c = t;
	}
	if(c>d)
	{
		int t;
		t = c;
		c = d;
		d = t;
	}
	if(a>b)
	{
		int t;
		t = a;
		a = b;
		b = t;
	}
	if(b>c)
	{
		int t;
		t = b;
		b = c;
		c = t;
	}
	if(a>b)
	{
		int t;
		t = a;
		a = b;
		b = t;
	}
	printf("%d %d %d %d \n",a,b,c,d);
	return 0;
}
