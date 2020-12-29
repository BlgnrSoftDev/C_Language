#include<stdio.h>
#include<conio.h>
#include<math.h>
int i,j,k,a,b;
float tem;
int main()
{
	int row,col;
	float mat[80][80];
	printf("************************************************\n");
	printf("Convert any mxn matrix into Row Echelon Form\n");

	printf("Enter the number of rows : ");
	scanf("%d",&row);
	printf("Enter the number of columns : ");
	scanf("%d",&col);

	// Taking Inputs
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the %d,%d element : ",i+1,j+1);
			scanf("%f",&mat[i][j]);
		}
	}

	printf("Your Matrix is :: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%.1f\t",mat[i][j]);
		}
		printf("\n");
	}
	// Program Logic
	for(k=0;k<row;k++)
	{

		if( (mat[k][k]) != 1)
		{
			float temp = mat[k][k];
			if(temp == 0)
				continue; // Avoiding division by zero
			for(j=0;j<col;j++)
			{
				mat[k][j] = ( (mat[k][j]) / temp );
			}
		}

		for(i=k+1;i<row;i++)
		{
			tem = mat[i][k];
			for(j=k;j<col;j++)
				{

					mat[i][j] = mat[i][j] - ( mat[k][j] * tem );
				}

		}

		// Printing Each Step
		printf("\n**************************\n");
		if(k==row-1)
			printf("Row Echelon form is : \n\n");
		else
			printf("Step %d\n\n",k+1);
		for(a=0;a<row;a++)
		{
			for(b=0;b<col;b++)
			{
				if(mat[a][b] == -0)
					mat[a][b] = 0; // Simply converting'-0' into '0'
				printf("%.1f\t",mat[a][b]);
			}
			printf("\n");
		}
	}
    return 0 ;
}
