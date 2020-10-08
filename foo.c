#include "foo.h"
#include <stdio.h>

int check (int *v, int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        if (v[i] != -1)
        {
            return -1;
        }
    }
    return 1; 

}

void * sortVector (int *v, int size)
{
    int i, k, j=0, vp[size];
    int maxIndex=0;//you need to add this variable in order to keep track of the maximum value in each iteration

    while (check(v,size) == -1)
    {
        for (i=0; i<size; i++)
        {
            maxIndex=i; //you suppose that the maximum is the first element in each loop 
            for (k=i+1; k<size; k++)
            {
                if (v[k] > v[maxIndex])
                  maxIndex=k; // if there is another element greater you preserve its index in the variable 
            }
           //after finishing the loop above you have the greatest variable in the array  which has the index stored in maxIndex
                    vp[i] = v[maxIndex]; // put it in vp array
                    v[maxIndex]=v[i];//put it in treated elements zone
                    v[i]=-1;// make it -1
                    j++;
        }
    }

    for (i=0; i<size; i++)
        v[i] = vp[i];

    return (int *)v[0];
}
