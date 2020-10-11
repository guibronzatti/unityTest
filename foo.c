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
    int maxIndex=0;
    while (check(v,size) == -1)
    {
        for (i=0; i<size; i++)
        {
            maxIndex=i;
            for (k=i+1; k<size; k++)
            {
                if (v[k] > v[maxIndex])
                  maxIndex=k;  
            }

                    vp[i] = v[maxIndex];
                    v[maxIndex]=v[i];
                    v[i]=-1;
                    j++;
        }
    }

    for (i=0; i<size; i++)
        v[i] = vp[i];

    return *v;
}
