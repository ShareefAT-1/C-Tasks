#include <stdio.h>
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", arr[i]);
    }
}

void sorting(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        printf("Step %d :- ", i);

        print(arr, size);

        printf("\n");
    }
}

int main()
{
    int arr[] = {45, 78, 88, 92, 56, 99, 73};
    int size = sizeof(arr) / sizeof(arr[0]);
    sorting(arr, size);
    printf("Top Three Scorers in Exam Is :");

    print(arr, 3);
}