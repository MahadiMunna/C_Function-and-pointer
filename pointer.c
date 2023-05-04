#include <stdio.h>

int main(){
    int x = 10;
    printf("Value of x = %d\n",x);
    int *p = &x;
    printf("add of x = %p\n",p);
    //dereference
    printf("value of x with pointer = %d\n",*p);
    *p=20;
    printf("value of x after change with pointer = %d\n",x);
    return 0;
}