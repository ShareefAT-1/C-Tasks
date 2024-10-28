#include <stdio.h>
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", arr[i]);
    }

}

void sortage(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        print(arr, size);
        printf("\n");
        printf("Partially Sorted :");
        print(arr,i);
        printf("\n");

    }
}

int main()
{
    int arr[] = {24, 30, 18, 22, 35, 29, 20};
    int size;
    size = sizeof(arr) / sizeof(arr[0]);
    sortage(arr, size);
    
}