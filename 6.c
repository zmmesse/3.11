#include<stdio.h>
int main()
{
    float m;
    printf("Please enter the weight of water:\n");
	scanf("%f",&m);
	float n=(950/3.0e-23)*m;
	printf("%f gream of water containing %e water molecules!\n",m,n);
	return 0;
	
 } 
 /*1个水分子的质量约为3.0e-23g,1夸脱水大约有950g,编写一个程序
，要求输入水的夸脱数，然后显示这么多水中包含多少个水分子。
*/
