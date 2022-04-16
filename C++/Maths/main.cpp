#include <stdio.h>

int main()
{
    // declare variables
    int a = 5;
    int b = 10;
    int c = 15;

    // Plus operation
    int sum = a + b + c;
    printf("Sum of a, b and c is %d\n", sum);

    // Minus operation
    int difference = b - a;
    printf("Difference of b and a is %d\n", difference);

    // Multiplication operation
    int product = a * b;
    printf("Product of a and b is %d\n", product);

    // Division operation
    int quotient = b / a;
    printf("Quotient of b and a is %d\n", quotient);

    // Modulus operation
    int remainder = b % a;
    printf("Remainder of b and a is %d\n", remainder);

    // Increment operation
    int increment = a++;
    printf("Increment of a is %d\n", increment);

    // Decrement operation
    int decrement = b--;
    printf("Decrement of b is %d\n", decrement);

    // Assignment operation
    int assignment = c = a + b;
    printf("Assignment of c is %d\n", assignment);

    // Pythagorean theorem
    int side1 = 3;
    int side2 = 4;
    int hypotenuse = (side1 * side1) + (side2 * side2);
    printf("Hypotenuse of a right triangle is %d\n", hypotenuse);

    return 0;
}