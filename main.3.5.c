#include <stdio.h>

//����ʽ����Ľ������ 
typedef struct node
{
    int coef;      //ϵ�� 
    int exp;       //ָ�� 
    struct node *next;
}Node; 

Node* create();                     //������ͷ��㵥����洢����ʽ 
void printPolynomial(Node *head);   //�������ʽ 
Node* add(Node *A,Node *B);         //����ʽ�� 
Node* mul(Node *A,Node *B);         //����ʽ�� 
void clearList(Node *L);            //��������ͷſռ� 

int main(int argc, char *argv[])
{
    Node* A,*B,*C,*D;
    A = create();            //����ʽA 
    B = create();            //����ʽB 
    C = add(A,B);           
    D = mul(A,B);
    printPolynomial(C);
    printPolynomial(D);
    
    return 0;
}

