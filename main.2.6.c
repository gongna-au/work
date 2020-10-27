#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int set[100];
int n,i;
void print(int flag)      //采用二进制方法输出集合元素
{
	int temp = flag;
	for (int i = 0; i < n; i++) {
		if (temp & 1 >= 1)
			printf("%d ",set[i]);//判断当前位是否为1
		temp >>= 1;
	}
	printf("\n");
}
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&set[i]);
	}
	int flag = 0;
	while (flag < pow(2, n)) {  //加上空集一共有2^n个集合
		print(flag);
		flag++;
	}
}

	
	return 0;
}
