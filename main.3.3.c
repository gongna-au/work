#include <stdio.h>

int Queenes[8] = {0},Counts = 0;
int Check(int row,int col);
void print();
void Try(int row);   //�ڵ�row�зŻʺ� 
 
int main(void)
{  
 	Try(0);    
 	printf("��%d�ַ���",Counts);    
 	return 0;
}

int Check(int row,int col)
{//��������֮ǰ��������    
	for (int i = 0; i < row; i++) 
	{  //����ȡ��ǰ�����лʺ�����λ�õ�������        
		int data = Queenes[i];             
		if (col == data) return 0;                  //�����ͬһ�У���λ�ò��ܷ�   
		if ((i + data) == (row + col))  return 0;   //�����ǰλ�õ�б�Ϸ��лʺ�          
		if ((i - data) == (row - col))  return 0;   //�����ǰλ�õ�б�·��лʺ�    
	}    
	return 1;   //���������������ǣ���ǰλ�þͿ��ԷŻʺ�    
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
		if (Check(row, col))      //���ڹ̶������У�����Ƿ��֮ǰ�Ļʺ�λ�ó�ͻ
		{          
		    Queenes[row] = col;       //����Ϊ�±������λ�ü�¼����                      
		    if (row == 7)             //�ѷ���8���ʺ� 
		    {                               
		        Counts++;             //��������1             
		        print();              //�������         
		        Queenes[row] = 0;               
		        return;            
		    }                       
 		    Try(row+1);              //��������һ��            
 		    Queenes[row] = 0;        //��˷    
 		}    
 	}
}
