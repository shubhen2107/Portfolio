#include <stdio.h>

int main()
{
    int a, b, c, choice, e, f, g, i, j, k, m, n;
    float o;
    printf("Would you like to add two numbers (1/0): ");
    scanf("%d", &choice);
  if (choice == 1)
  {
     printf("Enter two numbers whose product you want: ");
    scanf("%d%d", &a, &b);
    c = a * b;
    printf("The product of %d and %d is %d\n", a, b, c);
  }
  
else{
    printf("Thanks for your answer");
}
    printf("Would you like to add two numbers (1/0): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter two numbers whose sum you want: ");
        scanf("%d%d", &e, &f);
        g = e + f;
        printf("Sum of %d and %d is %d\n", e, f, g);
    }
    else
    {
        printf("Thanks for your answer\n");
    }
    printf("Would you like to subtract two numbers (1/0): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter two numbers whose subtraction you want: ");
        scanf("%d%d", &i, &j);
        k = i - j;
        printf("Subtraction of %d and %d is %d\n", i, j, k);
    }
    else
    {
        printf("Thanks for your answer\n");
    }
    printf("Would you like to divide two numbers (1/0): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter two numbers whose division you want: ");
        scanf("%d%d", &m, &n);

        if (n == 0)
        {
            printf("Error: Division by zero is not allowed!\n");
        }
        else
        {
            o = m / n;
            printf("Quotient of %d / %d is %.2f\n", m, n, o);
        }
    }
    else
    {
        printf("Thanks for your answer\n");
    }
    return 0;
}