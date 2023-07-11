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

    n= n+1;

    while (j >= k)
    {
        l[j+1] = l[j];
        j = j - 1 ;

    }
    l[k]= item ;

    printf("array elements after insertion: \n");

    for(i=0; i<n; i++)
    {
        printf("l[%d] = %d \n", i , l[i]);
    }
}