#include <stdio.h>
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", arr[i]);
    }
}
int main()
{
    int size, swapp, temp;
    int arr[] = {150, 250, 100, 175, 275};
    size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 1; i++)
    {
        // swapp = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // swapp = 1;
            }
        }
        // if (swapp == 0)
        // {
        //     break;
        // }
        print(arr, size);
        printf("\n");
    }
    printf("Lowest Price Is= %d \n",arr[0]);

    printf("Highest Price Is= %d",arr[size-1]);
}