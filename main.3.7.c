void printPolynomial(Node *head)
{
    Node *p = head->next;
    while(p)
    {
       	if(p->coef !=1 && p->coef != -1) printf("%d",p->coef);
       	else if(p->coef == 1 && p->exp == 0) printf("1"); 
       	else if(p->coef == -1&& p->exp == 0) printf("-1");
       	else if(p->coef == -1) printf("-"); 
       
       	if(p->exp > 1) printf("x^%d",p->exp);
       	else if(p->exp == 1) printf("x"); 
            
      	if(p->next) 
       	{
           	if(p->next->coef>0)printf("+");
       	} 
       	else printf("\n"); 
             
       	p = p->next; 
    }  
}
  
