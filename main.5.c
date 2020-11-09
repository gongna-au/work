#include<stdio.h>
#include<stdlib.h>
int main(){
   int n;
   scanf("%d",&n);
   int ans=0;
   while(n!=1){
       if(n%2==0)n/=2;
       else n=n*3+1;
       ans++;
   }
   printf("%d\n",ans);
}


