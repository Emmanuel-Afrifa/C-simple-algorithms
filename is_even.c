# include <stdio.h>
# include <stdbool.h>

int main(void)
{
    long int num;
    printf("Enter the number: ");
    scanf("%ld", &num);

    if (num%2 == 0)
    {
        printf("%d is even", num);
        return true;              
    }
    printf("%d is odd", num);
    return false;
}