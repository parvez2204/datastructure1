#include<stdio.h>
void main()
{
    int l[]={1,3,5,7,9};
    int item=10 , k=3 , n=5;
    int i=0 , j=n;
    printf("the orginal array elements are :\n");
    for(i=0; i<n; i++)
    {
        printf("l[%d] = %d \n", i , l[i]);
    }

    j=k;

    while (j <n)
    {
        l[j-1] = l[j];
        j = j + 1 ;

    }
    n = n-1;

    printf("array elements after deletion: \n");

    for(i=0; i<n; i++)
    {
        printf("l[%d] = %d \n", i , l[i]);
    }
}
