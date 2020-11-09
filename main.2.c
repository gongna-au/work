#include<stdio.h>
#include<stdlib.h>
int main(){
    int wei;
    scanf("%d",&wei);
    double ans=0;
    if(wei<=10){
        ans=wei*0.8;
    }
    else if(wei>10&&wei<=20){
        ans=wei*0.75;
    }
    else if(wei<=30)ans=wei*0.7;
    if(ans!=0)printf("%.2lf\n",ans);
    else printf("fail\n");
}

