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
 /*1��ˮ���ӵ�����ԼΪ3.0e-23g,1����ˮ��Լ��950g,��дһ������
��Ҫ������ˮ�Ŀ�������Ȼ����ʾ��ô��ˮ�а������ٸ�ˮ���ӡ�
*/
