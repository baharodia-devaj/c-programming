#include <stdio.h>
#include <math.h>
int decimalToOctal(int decimalnum)
{
    //temp is a variable.
    int octalnum = 0, temp = 1;

    while (decimalnum != 0)
    {
    	octalnum = octalnum + (decimalnum % 8) * temp;
    	decimalnum = decimalnum / 8;
        temp = temp * 10;
    }

    return octalnum;
}
int main()
{
    int decimalnum;

    printf("Enter a Decimal Number: ");
    scanf("%d", &decimalnum);
    //printing the number from decimal to octal.
    printf("Equivalent Octal Number: %d", decimalToOctal(decimalnum));

    return 0;
}
