#include <stdio.h>
int main()
{
    int n  ,i ,j ,temp;
   printf("Enter the size of array");
  scanf("%d",&n);
  int a[n];
  printf("Enter %d elements\n",n); 
   for(int i=0;i<n;i++){
 scanf("%d",&a[i]);
}
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
             temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                
            } 
             
        }
        printf("PASS %d \n", i+1);
       for(int k=0;k<n;k++){
            printf("%d\t",a[k]);
        }
        printf("\n");
    }
    printf("array after sorting \n");
   for(i=0;i<n;i++){
            printf("%d\t",a[i]);
        }
       
 return 0;
}