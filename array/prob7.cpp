#include <stdio.h>

int main(void) {

   int arr1[] = {1,3,6,8,9};
   int arr2[] = {5,6,9,12};
   
   int arr3[100];
   int i = 0,j = 0,k = 0,s;
   
   int p = sizeof(arr1)/sizeof(arr1[0]);
   
   int q = sizeof(arr2)/sizeof(arr2[0]);
   
   while(p && q)
   {
       
       if (arr1[i] < arr2[j])
       {
           arr3[k++] = arr1[i++];
           p--;
           
       } else {
        
           arr3[k++] = arr2[j++];
           q--;
       }
       
   }
   
   while ( p > 0)
   {
       arr3[k++]=arr1[i++];
       p--;
   }
   
   while( q > 0)
   {
       arr3[k++]=arr2[j++];
       q--;
   }
   
   for( s = 0; s < k; s++)
   {
       printf("%d ",arr3[s]);
   } 
   
 return 0;
}