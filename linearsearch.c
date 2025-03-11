#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i; 
    return -1;
}

int main(int argc, char *argv[])
{
    int arr[1000], n, i, key, result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    srand(time(NULL));

    
    for (i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    key = rand(); 
    printf("The element to be searched is: %d\n", key);

    
    clock_t start_time = clock();
    
    result = search(arr, n, key);

    
    clock_t end_time = clock();
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    if (result == -1)
    {
        printf("The element was not found.\n");
    }
    else
    {
        printf("The element was found at index %d.\n", result);
    }

    printf("The search took %.6f seconds.\n", time_taken); 
    return 0;
}
