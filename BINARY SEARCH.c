#include<stdio.h>
int main(){
int a[10],i,n,k,low=0,mid,high;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the element to search:");
scanf("%d",&k);
high=n-1;
while (low <= high){
mid=(low+high)/2;
if(k==a[mid]){
printf("Element found at %d position\t",mid);
break;
}
else if(k<a[mid]){
high=mid-1;
}
else{
low=mid+1;
}
}
if(low>high){
printf("Element is not available");
}
return 0;
}