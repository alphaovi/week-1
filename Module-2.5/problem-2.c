#include <stdio.h>
int main ()
{
    int a,b;
    scanf("%d  %d", &a, &b);
    int summation = a + b;
    printf("%d\n", summation);
    int subtraction = a - b;
    printf("%d \n", subtraction);
    int multiplication = a * b;
    printf("%d \n", multiplication);
    float division = a*1.0 / b;
    printf("%0.2f", division);
    return 0;
}