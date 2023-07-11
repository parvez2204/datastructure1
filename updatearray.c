#include<stdio.h>
void main()
{
    int l[]={1,3,5,7,9,12,10};
    int item=10 , k=3 , n=7;
    int i=0 , j=n;
    printf("the orginal array elements are :\n");
    for(i=0; i<n; i++)
    {
        printf("l[%d] = %d \n", i , l[i]);
    }

    l[k-1] = item;

    printf("array elements after updation: \n");

    for (i=0; i<n; i++){
        printf("l[%d] = %d \n" , i , l[i]);
    }

}