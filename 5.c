#include<stdio.h>
int main()
{
    int age;
    printf("Please enter your age:\n");
	scanf("%d",&age);
	float abc=age*3.156e7;
	printf("%d years equal to %f seconds!\n",age,abc);
	return 0;
	
 } 

/*一年约有3.156e7s,编写一个程序，要求输入您的年龄，然后显示该年龄合多少秒*/ 
