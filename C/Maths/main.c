#include <stdio.h>

int main()
{
    // Declare variables
    int a, b, c;
    float d, e, f;
    double g, h, i;

    // Assign values
    a = 1;
    b = 2;
    c = 3;
    d = 4.0;
    e = 5.0;
    f = 6.0;
    g = 7.0;
    h = 8.0;
    i = 9.0;

    // Plus operation
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d + %d = %d\n", c, b, c + b);
    printf("%d + %d = %d\n", a, a, a + a);

    // Minus operation
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d - %d = %d\n", c, b, c - b);
    printf("%d - %d = %d\n", a, a, a - a);

    // Multiplication operation
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d * %d = %d\n", c, b, c * b);
    printf("%d * %d = %d\n", a, a, a * a);

    // Division operation
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d / %d = %d\n", c, b, c / b);
    printf("%d / %d = %d\n", a, a, a / a);

    // Modulus operation
    printf("%d %% %d = %d\n", a, b, a % b);
    printf("%d %% %d = %d\n", c, b, c % b);
    printf("%d %% %d = %d\n", a, a, a % a);

    // Exponent operation
    printf("%d ^ %d = %d\n", a, b, a ^ b);
    printf("%d ^ %d = %d\n", c, b, c ^ b);
    printf("%d ^ %d = %d\n", a, a, a ^ a);

    // Assignment operation
    printf("%d = %d\n", a, a = b);
    printf("%d = %d\n", c, c = b);
    printf("%d = %d\n", a, a = a);

    // Increment operation
    printf("%d++ = %d\n", a, a++);
    printf("%d++ = %d\n", c, c++);
    printf("%d++ = %d\n", a, a);

    // Decrement operation
    printf("%d-- = %d\n", a, a--);
    printf("%d-- = %d\n", c, c--);
    printf("%d-- = %d\n", a, a);

    // Assignment operation
    printf("%d = %d\n", a, a = b);
    printf("%d = %d\n", c, c = b);
    printf("%d = %d\n", a, a = a);

    // pythagorean theorem
    int side1 = 3;
    int side2 = 4;
    int hypotenuse = (side1 * side1) + (side2 * side2);
    printf("The hypotenuse of the right triangle is %d\n", hypotenuse);

    return 0;
}