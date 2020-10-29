Node* create()
{     
	Node *L;
	L = (Node*)malloc(sizeof(Node));
	L->next = NULL;
	Node *p,*tail = L; 
    int coef,exp; 
      
    scanf("%d%d",&coef,&exp); 
      
    while(!(coef==0 && exp==0))
    {
      	p = (Node*)malloc(sizeof(Node));
      	p->coef = coef;
      	p->exp = exp;
        tail->next = p;
        tail = p; 
        scanf("%d %d",&coef,&exp); 
    } 
    tail->next = NULL;   //别忘记在链表的尾部结点指针域置空 
    
    return L;
 }
