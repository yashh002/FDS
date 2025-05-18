#include <stdio.h>
int main() {
    int n, i, j, k, temp;
    
    
    printf("Enter the number of elements: ");
    
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter the elements of the array: \n");
    
    for (i = 0; i < n; i++) {
       
        scanf("%d", &a[i]);
    }
    
    for (i = 1; i < n; i++) {
       
        for (j = 0; j < i; j++) {
            
            if (a[j] > a[i]) {
               
                temp = a[i];
               
                for (k = i; k > j; k--) {
                
                    a[k] = a[k - 1];
                
                   
                }
                
               
                a[j] = temp;
            }
        }
    }
    
    printf("Sorted array: \n");
    
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    printf("\n");
    
    return 0;
}