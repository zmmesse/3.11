#include<stdio.h>
int main()
{
    float h;
    printf("Please enter your height in cm :\n");
	scanf("%f",&h);
	float j=h/2.54;
	printf("your height equal to %f inches\n",j);
	return 0;
	
 } 
/*1英寸等于2.54cm。编写一个程序，要求输入您的身高（以英寸为单位）
，然后显示该身高等于多少厘米，如果您愿意，也可以要求以厘米为单位
输入身高，然后以英寸为单位进行显示
*/

