#include<stdio.h>
int main(){
    int arr[50];
    int size=0;
    int temp=0;
    printf("Enter size :");
    scanf("%d",&size);
    if (size>50||size<0)
    {
       printf("Invalid size .");
       return 1;
    }
    for (int a = 0; a < size; a++)
    {
        printf("Enter Element : %d ",a+1);
        scanf("%d",&arr[a]);

    }
    for (int i = 0; i < size-1; i++)
    {
        int swapped=0;
        for (int j = 0; j < size-1-i; j++)
        {
           if (arr[j]>arr[j+1])
           {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            swapped=1;
           }
           
        }
        if (swapped==0)
        {
            break;
        }
        
        
    }
    printf("Sorted Array");
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    
}