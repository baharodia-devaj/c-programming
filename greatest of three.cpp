#include <stdio.h>
int main(void)
{
    float a, b, c,max;
    printf("enter any 3 numbers\n");
    scanf("%f %f %f", &a, &b, &c);
    max=(a>=b)?a:b;
    max=(max>=c)?max:c;
    printf("%0.2f is largest", max);
    return 0;
}
