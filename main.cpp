#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace  std;

int main(void)
{
    double y,x,yf,yx;
    cin >> x >> endl;
    //y=(3/2)*pow((x+3),4)-(1/5)*pow((x-1),5);
    y=((pow((x+3)/2),4)*3)-0,25*(pow((x-1),5));
    yx=y;
    yf=6*pow((x+3),3)-pow((x-1),4);

    cout << yf << yx << endl;

    return 0;
}
