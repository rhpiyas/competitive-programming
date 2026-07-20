#include<stdio.h>

int main()
{
	int A[2][2];
	int B[2][2];
	int i,j;
	for(i=0; i<2; i++)
		{
		for(j=0; j<2; j++)
			{
				scanf("%d",&A[i][j]);
			}
		}

	for(i=0; i<2; i++)
		{
		for(j=0; j<2; j++)
			{
				scanf("%d",&B[i][j]);
			}
		}
	int C[2][2];
    int k;

	for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            for (k = 0; k < 2; ++k)
                C[i][j] += A[i][k] * B[k][j];

	for(i=0; i<2; i++)
		{
		for(j=0; j<2; j++)
			{
				printf("%d ",C[i][j]);
			}
		printf("\n");
		}
	
	return 0;
}