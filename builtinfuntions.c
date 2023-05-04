#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float a=2.3456;
    float b=2.7456;
    float c=25;
    float d=5;
    int e = -4;
    printf("a = %f\nb = %f\nc = %f\nd = %f\ne = %d\n\n",a,b,c,d,e);
    printf("ceilling of a %f\n",ceil(a));
    printf("ceilling of b %f\n",ceil(b));
    printf("floor of a %f\n",floor(a));
    printf("floor of b %f\n",floor(b));
    printf("round of a %f\n",round(a));
    printf("round of b %f\n",round(b));
    printf("sqrt of c %f\n",sqrt(c));
    printf("2 pow of d %f\n",pow(d,2));
    printf("abs of e %d\n",abs(e));
    return 0;
}