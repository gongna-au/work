#include <stdio.h>

int Queenes[8] = {0},Counts = 0;
int Check(int row,int col);
void print();
void Try(int row);   
 
int main(void)
{  
 	Try(0);    
 	printf("有%d种方案",Counts);    
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
		        Counts++;             //方案数加1             
		        print();              //输出方案         
		        Queenes[row] = 0;               
		        return;            
		    }                       
 		    Try(row+1);              //继续放下一行            
 		    Queenes[row] = 0;          
 		}    
 	}
}
