#include <stdio.h>
int main()
{
    int arrA[2][3]={0,};
    int arrB[2][3]={0,};
    int arrC[2][3]={0,};
    int i,j;
    for(i=0;i<2;i++)
	{
        for(j=0;j<3;j++) 
		{
            printf("arrA[%d][%d]: ",i,j);
            scanf("%d",&arrA[i][j]);
        }
    }
    printf("arrA\n");
    for(i=0;i<2;i++)
	{
        for(j=0;j<3;j++)
		{
            printf("arrA[%d][%d] : %d ",i,j,arrA[i][j]);
        }
		printf("\n");
    }
    for(i=0;i<2;i++)
	{
        for(j=0;j<3;j++) 
		{
            printf("arrB[%d][%d]: ",i,j);
            scanf("%d",&arrB[i][j]);
        }
    }
    printf("arrB\n");
    for(i=0;i<2;i++)
	{
        for(j=0;j<3;j++)
		{
            printf("arrB[%d][%d] : %d ",i,j,arrB[i][j]);
        }
		printf("\n");
    }
    for(i=0;i<2;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		arrA[i][j] = arrA[i][j] * 2;
    		arrB[i][j] = arrB[i][j] * 3;
    	}
    }
    for(i=0;i<2;i++)
	{
        for(j=0;j<3;j++) 
		{
			arrC[i][j] = arrA[i][j] - arrB[i][j];
        }
    }
    printf("2A - 3B = \n");
    for(i=0;i<2;i++)
	{
        for(j=0;j<3;j++) 
		{
            printf("%d ",arrC[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}
