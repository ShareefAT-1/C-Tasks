#include <stdio.h>
int main()
{
    int arr[] = {1, 7, 12, 6, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int isprime = 1;
        if (arr[i] <= 1)
        {
            continue;
        }
        for (int j = 2; j <= arr[i] / 2; j++)
        {
            if (arr[i] % j == 0)
            {
                isprime = 0;

                break;
            }
        }
        if (isprime==1)
        {
            arr[i] = 0;
        }
        
    }
    for (int i = 0; i < size; i++)
        {
            printf("%d ,", arr[i]);
        }
}