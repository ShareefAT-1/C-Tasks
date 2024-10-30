#include <stdio.h>
int main(){
    int arr[100];
    int size;
    int sum =0;
    printf("Enter Size Of The Array");
    scanf("%d",&size);
    if (size>100||size<0)
    {
        printf("Invalid Size");
        return 1;
    }
    
     printf("Enter Some Values");
    for (int i = 0; i < size; i++)
    {
        printf("Enter Element %d ",i+1);
        scanf("%d",&arr[i]);

    }


    for (int j = 0; j < size; j++)
    {
        sum=sum+arr[j];
    }
    printf("The Sum Of The Array Elements :%d ",sum);
    
    
}