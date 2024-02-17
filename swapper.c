# include <stdio.h>

int main(void){
    float a, b;
    float *ptra, *ptrb;

    printf("Before\n");
    printf("Enter the numbers: ");
    scanf("%f %f", &a, &b);
    printf("first number: %f\n", a);
    printf("second number: %f\n", b);

    ptra = &a;
    ptrb = &b;

    printf("After: \n");
    float tmp = a;
    *ptra = b;
    *ptrb = tmp;
    printf("first number: %f\n", a);
    printf("second number: %f\n", b);

    return 0;

}

