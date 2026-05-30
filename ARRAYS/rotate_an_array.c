#include <stdio.h>

int main() {
int n;
printf("enter the no. element in array:");
scanf("%d",&n);
int arr[n];
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
 printf("\nBefore rotation\n");
 for (int i = 0; i < n; i++)
 {
       
        printf("%d ",arr[i]);
    }
    int temp=arr[0];
    for (int i = 1; i < n; i++)
    {
       arr[i-1]=arr[i];
       

    }
    arr[n-1]=temp;
   
    printf("\nAfter rotation\n");
    for (int i = 0; i < n; i++)
    { 
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}