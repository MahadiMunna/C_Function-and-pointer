#include <stdio.h>
int x=500;//global scope
void fun(void){
    int s = 100;
    printf("Fun er s er address %p",&s);
}

int main(){
    int s=200;//block scope
    printf("Main er s er address %p\n",&s);
    fun();
    printf("%d",x);
    return 0;
}