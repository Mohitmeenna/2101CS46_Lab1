#include <stdio.h>
// function for addition
void addition(long int a, long int b)
{
    printf("RESULT = %ld", a + b);
}
// function for sub
void subtraction(long int a, long int b)
{
    printf("RESULT = %ld", a - b);
}
// function for multiplication 
void multiplication(long int a, long int b)
{
    printf("RESULT = %ld", a * b);
}

int main()
{
    long int k;
    long int l;
    printf("Enter num1:\n");
    scanf("%ld", &k);
    printf("Enter num2:\n");

    scanf("%ld", &l);
    printf("Enter code of the operation needed:\n 1. Addition \t 2. Subtract \t 3. Multiply \t 4. Divide\n");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        addition(k, l);
        break;
              case 2:
        subtraction(k, l);
        break;
case 3:
        multiplication(k, l);
        break;
    }
    return 0;
}
