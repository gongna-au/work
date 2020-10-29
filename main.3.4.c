#include <stdio.h>

int Queenes[8] = {0},Counts = 0;
int Check(int row,int col);
void print();
void Try(int row);   
 
int main(void)
{  
 	Try(0);    
 	printf("��%d�ַ���",Counts);    
 	return 0;
}

int Check(int row,int col)
{    
	for (int i = 0; i < row; i++) 
	{         
		int data = Queenes[i];             
		if (col == data) return 0;                  
		if ((i + data) == (row + col))  return 0;            
		if ((i - data) == (row - col))  return 0;      
	}    
	return 1;     
}

void print()
{    
	for (int row = 0; row < 8; row++)    
	{        
		int col;        
		for (col = 0; col < Queenes[row]; col++)            
		    printf("0");        
		printf("#");        
		for (col = Queenes[row] + 1; col < 8; col++)
		    printf("0");         
		printf("\n");    
	}    
	printf("================\n");
}
void Try(int row)
{    
	for (int col = 0; col < 8; col++) 
	{                
		if (Check(row, col))      
		{          
		    Queenes[row] = col;                       
		    if (row == 7)              
		    {                               
		        Counts++;             //��������1             
		        print();              //�������         
		        Queenes[row] = 0;               
		        return;            
		    }                       
 		    Try(row+1);              //��������һ��            
 		    Queenes[row] = 0;          
 		}    
 	}
}
