#include <stdio.h>

int sum(int a,int b){
    int s=a+b;
    return s;
}


int main(){
    int s = sum(1,2);
    printf("%d",s);
    printf("\n%d",sum(10,20));
    return 0;
}