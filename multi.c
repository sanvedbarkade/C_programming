#include<stdio.h>

int main()
{

    int Arr[2][2] = 11;
    int Arr[1][4] = 21;
    int Arr[3][3] = 51;
    int Arr[2][1] = 101;
    int Arr[3][0] = 111;
    int Arr[3][4] = 151;
    int Arr[1][2] = 201;

    printf("%d\n",Arr[1][4]);
    printf("%d\n",Arr[3][3]);
    printf("%d\n",Arr[1][2]);
    printf("%d\n",Arr[3][0]);
     
    return 0;

}