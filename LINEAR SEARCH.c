#include<stdio.h>
int main()
{
    int a[20], n,i,found=0,key;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter %d array element\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched\n");
    scanf("%d", &key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            found=1;
            printf("Number found\n");
            break;
        }
    }
    if(found==0)
    {
        printf("Number not found\n");
    }
     return 0;
}