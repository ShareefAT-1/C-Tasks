#include <stdio.h>
int partision(int arr[], int low, int high)
{
    int pvt = arr[low];
    int start = low;
    int end = high;
    while (start < end)
    {
        while (arr[start] <= pvt)
        {
            start++;
        }
        while (arr[end] > pvt)
        {
            end--;
        }
        if (start < end)
        {
            int temp = arr[end];
            arr[end] = arr[start];
            arr[start] = temp;
        }
    }
    int temp = arr[end];
    arr[end] = pvt;
    arr[low] = temp;

    for (int i = 0; i < 7; i++)
    {
        printf("%d ,", arr[i]);
    }
    printf("\n");

    return end;
}
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int loc = partision(arr, low, high);
        quicksort(arr, low, loc - 1);
        quicksort(arr, loc + 1, high);
    }
}
int main()
{
    int arr[] = {24, 30, 18, 22, 35, 29, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", arr[i]);
    }
    printf("\n");
    printf("Minimum Age :%d", arr[0]);
    printf("\n");
    printf("Maximum Age :%d", arr[size - 1]);
}