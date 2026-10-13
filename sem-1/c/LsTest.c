#include<stdio.h>
void main()
{
 int a[50], i, n, key, flag = 0, pos = -1; 
 printf("Enter the limit of array :");
 scanf("%d", &n);
 printf("Enter the array elements :");
 for(i = 0; i < n; i++)
 {
 scanf("%d", &a[i]);
 }
 printf("Enter the key to be searched :");
 scanf("%d", &key);
 for(i = 0; i < n; i++)
 {
 if(a[i] == key)
 {
 flag = 1;
 pos = i; 
 break;
 }
 }
 if(flag == 1) 
 {
 printf("Element found at position: %d \n", pos + 1); 
 }
 else
 {
 printf("Search Unsuccessful, Element Not Found");
 }
}
