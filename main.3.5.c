#include <stdio.h>

//多项式链表的结点声明 
typedef struct node
{
    int coef;      //系数 
    int exp;       //指数 
    struct node *next;
}Node; 

Node* create();                     //创建带头结点单链表存储多项式 
void printPolynomial(Node *head);   //输出多项式 
Node* add(Node *A,Node *B);         //多项式加 
Node* mul(Node *A,Node *B);         //多项式乘 
void clearList(Node *L);            //清空链表，释放空间 

int main(int argc, char *argv[])
{
    Node* A,*B,*C,*D;
    A = create();            //多项式A 
    B = create();            //多项式B 
    C = add(A,B);           
    D = mul(A,B);
    printPolynomial(C);
    printPolynomial(D);
    
    return 0;
}

