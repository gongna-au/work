#include <stdio.h>

int Queenes[8] = {0},Counts = 0;
int Check(int row,int col);
void print();
void Try(int row);   //在第row行放皇后 
 
int main(void)
{  
 	Try(0);    
 	printf("有%d种方案",Counts);    
 	return 0;
}

int Check(int row,int col)
{//遍历该行之前的所有行    
	for (int i = 0; i < row; i++) 
	{  //挨个取出前面行中皇后所在位置的列坐标        
		int data = Queenes[i];             
		if (col == data) return 0;                  //如果在同一列，该位置不能放   
		if ((i + data) == (row + col))  return 0;   //如果当前位置的斜上方有皇后          
		if ((i - data) == (row - col))  return 0;   //如果当前位置的斜下方有皇后    
	}    
	return 1;   //如果以上情况都不是，当前位置就可以放皇后    
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
		if (Check(row, col))      //对于固定的行列，检查是否和之前的皇后位置冲突
		{          
		    Queenes[row] = col;       //以行为下标的数组位置记录列数                      
		    if (row == 7)             //已放完8个皇后 
		    {                               
		        Counts++;             //方案数加1             
		        print();              //输出方案         
		        Queenes[row] = 0;               
		        return;            
		    }                       
 		    Try(row+1);              //继续放下一行            
 		    Queenes[row] = 0;        //回朔    
 		}    
 	}
}
