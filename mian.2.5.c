typedef struct date 
{
	int year, month, day;
}date;
bool isRunYear(int year) 
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return true;
	else	return false;
}
int days(int year ,int month) 
{
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||month == 10 ||
 month == 12)
		return 31;
	if(isRunYear(year)) return 29;
	return 28;
}
bool isyear(struct date d) 
{
	if (d.year < 1960 || d.year > 2059) return false;
	if (d.month > 12) return false;
	if (isRunYear(d.year) && d.month == 2 && d.month > 29) return false;
	if (d.day>days(d.year,d.month)) return false;
	return true;
}
int cmp(const void *a,const void *b)
{
	if(((date*)a)->year==((date*)b)->year)
{
		if(((date*)a)->month==((date*)b)->month)
{
			return ((date*)a)->day-((date*)b)->day;
		}
		return ((date*)a)->month-((date*)b)->month;
	}
	return ((date*)a)->year-((date*)b)->year;
}
int  main()
{
	struct date d[10];
	int a[10],i;
	scanf("%d/%d/%d",&a[0],&a[1],&a[2]);
	d[0].year = a[0],   d[0].month = a[1],  d[0].day = a[2];
	d[1].month = a[0],  d[1].day = a[1],    d[1].year = a[2];
	d[2].day = a[0],    d[2].month = a[1],  d[2].year = a[2];
	for (i=0;i<3;i++)
{
		if(d[i].year>=60) d[i].year+=1900;
		else d[i].year+=2000;
	}
	qsort (d, 3, sizeof(struct date), cmp);
	for ( i = 0; i < 3; i++)
	{
		if(i>0&&d[i].day==d[i-1].day&&d[i].year==d[i-1].year&&d[i].month==d[i-1].month)   
continue; 
	if(isyear(d[i]))
	printf("%d-%02d-%02d\n",d[i].year,d[i].month,d[i].day);
	}

}
