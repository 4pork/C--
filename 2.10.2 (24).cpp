#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace :: std;

int main()
{
    int x = 0;// �����
    int Sum=0;//���������� �����
    int z2=0;//���������� �������
    int z=0;// ���������� �������� �����
    cout << "Input Number"<<endl;
    cin >> x;

     while(x!=0)
    {
      z = x%10;
      z2 = pow(z,2);
      Sum +=z2;
      x = x/10;
      }
      cout << Sum;

    return 0;
}
