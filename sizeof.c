#include<stdio.h>

int main()

{
    int i = 11;
    char ch = 'A';
    float f = 90.89;
    double d = 90.784585;
    int Arr[5];
    double brr[5];
    float crr[5];
    char Drr[5];

    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(d));

    printf("%d\n",sizeof(Arr));
    printf("%d\n",sizeof(brr));
    printf("%d\n",sizeof(crr));
    printf("%d\n",sizeof(Drr));

    return 0;

}