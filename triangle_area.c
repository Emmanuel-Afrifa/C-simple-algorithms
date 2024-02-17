# include <stdio.h>

int main(void)
{
    double base, height;
    printf("Enter the base and height of the triangle: ");
    scanf("%lf %lf", &base, &height);

    printf("Base: %lf\n", base);
    printf("Height: %lf\n", height);

    double area = (0.5 * base * height);

    printf("Area of the triangle: %lf\n", area);

    return 0;
}