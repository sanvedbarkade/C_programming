#include<stdio.h>

struct demo
{

    int no;
    int data;
};
int main()
{

    struct demo obj;

    struct demo *ptr = &obj;

    obj.no = 11;// .is direct accessing operator

    ptr->data = 21;// -> is indirect accessing operator


    return 0;
}