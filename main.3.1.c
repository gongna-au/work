#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

typedef struct node            //���������� 
{
    int data; 
    struct node *next;
} Node; 

void insert(Node *head, int d);         //�����������в��������������� 
void display(Node *head);               //������� 
int setUnion(Node *A,Node*B,Node *C);   //���ϲ� 
void destrory(Node* head);              //�ͷ�����ռ� 

int main(void)
{
	Node *A = (Node *)malloc(sizeof(Node));
	A->next = NULL;
	
	int x;
	while(scanf("%d",&x) && x != -1)
	{
		insert(A,x);
	}

	Node *B = (Node *)malloc(sizeof(Node));
	B->next = NULL;
	while(scanf("%d",&x) && x != -1)
	{
		insert(B,x);
	}
	
	Node *C = (Node *)malloc(sizeof(Node));
	C->next = NULL;
	
	int c = setUnion(A,B,C);
	printf("%d\n",c);
	display(C);
	
	destrory(A);
	destrory(B);
	destrory(C);
	
	return 0;
}


void insert(Node *head, int d)
{//headΪ����ͷָ��
    Node *p = head->next;      //pָ���һ����㣨ͷ��ɿ����ǵ�0����㣩
   	Node *prep = head;         //pre��p����ǰ�����
   	Node *s = (Node*)malloc(sizeof(Node));   //ʹ��malloc()��̬����һ�����ռ�
   	s->data = d;
    while(p != NULL)           //�Ҳ���λ��
    {
        if(  d >= p->data )
        {  
			prep = p;  
			p = p->next;
	    }
        else  break;
    }
    s->next = p;               //s�����뵽���prep��p�м�  
	prep->next = s;     
}


void display(Node *head)
{//��������
    Node *p = head->next;         //pָ���һ�����
   	while(p != NULL)              //��������
   	{  
        printf("%d ",p->data);
        p = p->next;
   	}  
}


int setUnion(Node *A,Node*B,Node *C)
{
	int c = 0;
	Node *p = A->next,*q = B->next;
	while(p && q)              
	{
		if(p->data < q->data)      //С��Ԫ�ز��뵽C�� 
		{
			insert(C,p->data);
			p = p->next;
		}
		else if(p->data > q->data)
		{
			insert(C,q->data);
			q = q->next;
		}
		else                       //���ֻһ��Ԫ�ز��뵽C�� 
		{
			insert(C,p->data);
			p = p->next;
			q = q->next;
		}
		c++;
	}
	while(p)                     //A�����л���Ԫ��δ����C�� 
	{
		insert(C,p->data);
		p = p->next;
	}
	while(q)                    //B�����л���Ԫ��δ����C�� 
	{
		insert(C,q->data);
		q = q->next;
	}
	return c;
}
void destrory(Node* head)
{
	Node *p = head,*q;       //pָ���һ�����	
	while(p)                         
	{
	    q = p;
	    p = p->next;
	    free(q);            //�ͷ�q��ָ���ռ�
	}
}
