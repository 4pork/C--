
4 #include <stdio.h>
#include <stdlib.h>

int main()
{
int m; // ������ �������
printf("Input N>3 & M>4 \n");
scanf("%d" ,&m);// ���� ���-�� �����
if (m <=3 )
{return 0;}
int n;
scanf("%d" ,&n);//���� ���-�� ��������
if (n <=4)
{return 0;}
int a[m][n];
int i;
int j;
a[m][n] =rand();
for(i = 0; i < m ; i++)//�������� �������
{
for(j = 0 ; j < n ;j++)
{printf("%d \n" ,& a[i][j]);}
}

return 0;
}
