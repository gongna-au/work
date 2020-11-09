 #include<stdio.h>
#include<stdlib.h>
typedef struct{
    int StuId;
    int Score;
}student;
void getInfo(student* ptr,int n){
    int i;
    for(i=1;i<=n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        ptr[i].StuId=a;
        ptr[i].Score=b;
    }
}
void scoreSort(student* ptr,int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(ptr[i].Score>ptr[j].Score){
                student tmp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=tmp;
            }
        }
    }
}
void outputAsc(student* ptr,int n){
    int i;
    for(i=1;i<=n;i++)printf("%d %d\n",ptr[i].StuId,ptr[i].Score);
}
void outputDesc(student* ptr,int n){
    int i;
    for(i=n;i>=1;i--)printf("%d %d\n",ptr[i].StuId,ptr[i].Score);
}
int main(){
    student ptr[1000];
    int n;
    scanf("%d",&n);
    getInfo(ptr,n);
    scoreSort(ptr,n);
    printf("\n");
    outputDesc(ptr,n);
    printf("\n");
    outputAsc(ptr,n);
}



