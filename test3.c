#include <stdio.h>
int main()
{
    int arr[] = {0, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == 1 || arr[i] == 0)
        {
            arr[i] = 0;
        }
        else
        {
            for (int j = 2; arr[i] / 2; j++)
            {
                if (arr[i] % arr[j] != 0)
                {

                    printf("Not Prime");
                }
            }
        }
    }
}