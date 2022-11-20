#include <stdio.h>
int main()
{
    int arrA[2][3]={0,};
    int arrB[2][3]={0,};
    int arrC[15]={0,};
    int i,j,n=0,k;
    for(i=0;i<2;i++)
	{
        for(j=0;j<3;j++) 
		{
            printf("arrA[%d][%d]: ",i,j);
            scanf("%d",&arrA[i][j]);
            arrC[n] = arrA[i][j];
            n++;
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
            arrC[n] = arrB[i][j];
            n++;
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
    for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arrC[j+1]<arrC[j])
			{
				k=arrC[j+1];
				arrC[j+1]=arrC[j];
				arrC[j]=k;
			}
		}
	}
	printf("오름차순 결과 \n"); 
	for(i=0;i<n;i++)
	{
		printf("%d ",arrC[i]);
	}
    
    
	return 0;
}
