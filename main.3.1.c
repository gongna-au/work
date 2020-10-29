#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

typedef struct node            //链表结点声明 
{
    int data; 
    struct node *next;
} Node; 

void insert(Node *head, int d);         //在有序链表中插入整数后仍有序 
void display(Node *head);               //链表遍历 
int setUnion(Node *A,Node*B,Node *C);   //集合并 
void destrory(Node* head);              //释放链表空间 

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
{//head为链表头指针
    Node *p = head->next;      //p指向第一个结点（头结可看作是第0个结点）
   	Node *prep = head;         //pre是p结点的前驱结点
   	Node *s = (Node*)malloc(sizeof(Node));   //使用malloc()动态分配一个结点空间
   	s->data = d;
    while(p != NULL)           //找插入位置
    {
        if(  d >= p->data )
        {  
			prep = p;  
			p = p->next;
	    }
        else  break;
    }
    s->next = p;               //s结点插入到结点prep和p中间  
	prep->next = s;     
}


void display(Node *head)
{//遍历链表
    Node *p = head->next;         //p指向第一个结点
   	while(p != NULL)              //遍历链表
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
		if(p->data < q->data)      //小的元素插入到C中 
		{
			insert(C,p->data);
			p = p->next;
		}
		else if(p->data > q->data)
		{
			insert(C,q->data);
			q = q->next;
		}
		else                       //相等只一个元素插入到C中 
		{
			insert(C,p->data);
			p = p->next;
			q = q->next;
		}
		c++;
	}
	while(p)                     //A集合中还有元素未并到C中 
	{
		insert(C,p->data);
		p = p->next;
	}
	while(q)                    //B集合中还有元素未并到C中 
	{
		insert(C,q->data);
		q = q->next;
	}
	return c;
}
void destrory(Node* head)
{
	Node *p = head,*q;       //p指向第一个结点	
	while(p)                         
	{
	    q = p;
	    p = p->next;
	    free(q);            //释放q所指结点空间
	}
}
