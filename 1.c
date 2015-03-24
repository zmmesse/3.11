#include<stdio.h>
int main()
{
int a=1e20;
float b=1e-6;
float c=1e10;
printf("%d,%d\n",a,a+1);
printf("%f,%f\n",b,b*0.1);
printf("%f\n%f\n",c,10*c);
return 0;
}
/*通过试验的方法（即编写有此类问题的程序）观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况*/

