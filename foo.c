#include "foo.h"
#include <stdio.h>

void * sort(int *ptr, int n) 
{ 
    int i, j, t; 
    
    for (i = 0; i < n; i++) { 
  
        for (j = i + 1; j < n; j++) { 
  
            if (*(ptr + j) < *(ptr + i)) { 
  
                t = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = t; 
            } 
        } 
    } 
  
    // print the first number from sorted list
    printf("%d \n", ptr[0]); 

    return (int *)ptr[0];
} 
