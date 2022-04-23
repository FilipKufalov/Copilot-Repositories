#include <stdio.h>
#include <stdlib.h>

// no changes
// Void for plus
void MathPlus(int a, int b)
{
    printf("%d + %d = %d\n", a, b, a + b);
}

// Void for minus
void MathMinus(int a, int b)
{
    printf("%d - %d = %d\n", a, b, a - b);
}

// Void for multiply
void MathMultiply(int a, int b)
{
    printf("%d * %d = %d\n", a, b, a * b);
}

// Void for divide
void MathDivide(int a, int b)
{
    printf("%d / %d = %d\n", a, b, a / b);
}

int main()
{
    MathPlus(1, 5);
    MathMinus(3, 5);
    MathMultiply(2, 5);
    MathDivide(10, 5);
}
