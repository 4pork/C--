
4 #include <stdio.h>
#include <stdlib.h>

int main()
{
int m; // размер массива
printf("Input N>3 & M>4 \n");
scanf("%d" ,&m);// ввод кол-во строк
if (m <=3 )
{return 0;}
int n;
scanf("%d" ,&n);//ввод кол-во столбцов
if (n <=4)
{return 0;}
int a[m][n];
int i;
int j;
a[m][n] =rand();
for(i = 0; i < m ; i++)//¬ведение массива
{
for(j = 0 ; j < n ;j++)
{printf("%d \n" ,& a[i][j]);}
}

return 0;
}
