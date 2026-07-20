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
        for(int j=0; j<n-1-i; j++)
        {
            if(id[j]>id[j+1])
            {
                int temp = id[j];
                id[j] = id[j+1];
                id[j+1] = temp;
            }
        }
    }
    printf("After Sorting in Ascending Order : ");
    printarray(id);
    return 0;
}