#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int yearDays(int year)
{
	if((year%4==0 && year%100!=0) || year%400==0) return 366;
	else return 365;
}

int monthDays(int year,int month)
{
	int sum=0;
	int rui[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int ping[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int ruiflag=0,i;
	if((year%4==0 &&year%100!=0) || year%400==0) ruiflag=1;
	for(i=0;i<month-1;i++)
	{
		if(ruiflag==1) sum+=rui[i];
		else sum+=ping[i];
	}
	return sum;
}
//获取从公历1年1月1日至当前日期的总天数
int getDays(int year,int month,int day)
{
	int i=1,days=1;
	while(i<year)
	{
		days+=yearDays(i);
	   i++;
	}
	int days2=monthDays(year,month);
	return days+days2+day;
}


int main(void)
{
	int year1,year2,month1,month2,day1,day2;
	scanf("%d%d%d",&year1,&month1,&day1);
	scanf("%d%d%d",&year2,&month2,&day2);
	int days1=getDays(year1,month1,day1);
	int days2=getDays(year2,month2,day2);
	int ans=0;
	if(days1>=days2) ans=days1-days2;
	else ans=days2-days1;
	printf("%d\n",ans);
	return 0;
}
