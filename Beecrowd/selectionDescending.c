#include<stdio.h>
#define n 8
void printarray(int arr[])
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int id[n] = {2,4,2,3,5,1,8,2};
    printf("My Student ID : ");
    printarray(id);
    
    for(int i=0; i<n-1; i++)
    {
        int max = i;
        for(int j=i+1; j<n; j++)
        {
            if(id[max]<id[j])
            {
                max = j;
            }
        }       
        int temp = id[i];
        id[i]  =id[max];
        id[max] = temp;
    }
    printf("After Sorting in Descending Order : ");
    printarray(id);
    return 0;
}