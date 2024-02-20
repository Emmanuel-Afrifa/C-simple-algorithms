# include <stdio.h>
# include <stdlib.h>

double * get_inputs(int n);
double sum_values(double *arr, int num_ele);

int main(void)
{
    printf("Enter the number of elements: ");
    int length;
    scanf("%d", &length);

    double * values = get_inputs(length);

    if (values == NULL)
    {
        printf("Invalid input array");
        exit(1);
    }

    double sums = sum_values(values, length);
    double avg = sums / length;

    if (avg < 50)
    {
        printf("YOU ARE A FAIL\n");
    }
    else 
    {
        printf("YOU ARE A PASS\n");
    }

    free(values);

    return 0;
}

double * get_inputs(int n) {
    if (n <= 0)
    {
        printf("The number of elements cannot be 0 or negative!\n");
        return NULL;
    }

    double * array = (double *)malloc(n * sizeof(double));
    if (array == NULL)
    {
        printf("Menmory allocation failed!!!\n");
        exit(1);
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%lf", &array[i]);
    }

    return array;
}

double sum_values(double *arr, int num_ele)
{
    double curr_sum = 0.0;
    for (int i = 0; i < num_ele; i++)
    {
        curr_sum += arr[i];
    }

    return curr_sum;
}