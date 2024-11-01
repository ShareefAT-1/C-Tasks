#include <stdio.h>
int main(){
    int arr[]={3,4,5,6,7,8,9,10,15};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%3==0)
        {
           if (arr[i]%5==0)
           {
            arr[i]=1;
           }
           else {
            arr[i]=0;
           }
           
        }
        else if (arr[i]%5==0)
        {
           arr[i]=1;
        }
        
        
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ,",arr[i]);
    }
    
}