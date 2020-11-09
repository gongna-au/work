#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int Val;
    struct node* Prev;
    struct node* Next;
}listNode;
listNode* receive(listNode* ptr,int n){
    int i;
    for (i=0;i<n;i++){
    listNode* node=(listNode*)malloc(sizeof(listNode));
    scanf("%d", &node->Val);
    node->Next = ptr;
    node->Prev = NULL;
    if (ptr!=NULL) ptr->Prev = node;
        ptr = node;
    }
    return ptr;
}
int main(){
    int n;
    scanf("%d",&n);
    listNode* ptr = NULL;
    ptr = receive(ptr,n);
    int a[n+10];
    int len=0,i;
    while(ptr!=NULL){
        a[++len]=ptr->Val;
        ptr=ptr->Next;
    }
    int flag=0;
    for(i=1;i<=len/2;i++){
        if(a[i]!=a[len-i+1]){
            flag=1;
            break;
        }
    }
    if(flag)printf("false\n");
    else printf("true\n");
}


