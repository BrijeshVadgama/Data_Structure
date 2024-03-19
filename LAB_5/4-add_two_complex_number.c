// 4 - Write a program to add two complex numbers by passing structure to a Function. [C]

#include <stdio.h>
struct complex
{
    float real;
    float img;
};
struct complex add(struct complex n1, struct complex n2)
{
    struct complex result;
    result.real = n1.real + n2.real;
    result.img = n1.img + n2.img;
    return (result);
}
int main()
{
    struct complex n1, n2, sum;
    printf("Enter real no n1: ");
    scanf("%f", &n1.real);
    printf("Enter img no n1: ");
    scanf("%f", &n1.img);
    printf("Enter real no n2: ");
    scanf("%f", &n2.real);
    printf("Enter img no n2: ");
    scanf("%f", &n2.img);
    sum = add(n1, n2);
    printf("Sum of Real Number is :: %.1f\n", sum.real);
    printf("Sum of Img Number is :: %.1f", sum.img);
    return 0;
}