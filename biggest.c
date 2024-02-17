# include <stdio.h>
# include <stdlib.h>

double * get_values(int size);
double get_max(double * arr, int size);

int main(void)
{
    int n;
    printf("Number of elements: ");
    scanf("%d", &n);

    double * array = get_values(n);
    if (array == NULL)
    {
        printf("The array initialization failed");
        exit(3);
    }

    double maximum = get_max(array, n);

    printf("The maximum value: %lf\n", maximum);

    return 0;


}

double * get_values(int size)
{
    if (size <= 0)
    {
        printf("You can't have an array of size 0 or negative");
        exit(1);
    }

    double * arr = (double *)malloc(size * sizeof(double));
    if (arr == NULL)
    {
        printf("Memory allocation failed!!!\n");
        exit(2);
    }

    for (int i = 0; i<size; i++)
    {
        printf("Element %d: ", i);
        scanf("%lf", &arr[i]);
    }

    return arr;
}

double get_max(double * arr, int size)
{
    double max_now = arr[0];
    for (int i = 0; i<size; i++)
    {
        if (max_now < arr[i])
        {
            max_now = arr[i];
        }
    }
    return max_now;
}