#include<stdlib.h>
#include<stdio.h>

int main()
{
	int n, i, *a,j,cnt,k;

	printf("\nEnter value of number of elements:");
	scanf("%d",&n);

	a=malloc(n*sizeof(int));


	printf("\nEnter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	k=0;
	for(i=0;i<n;i++)
	{
		j=0;
		cnt=0;
		while(j<n)
		{
			if(a[j] > a[i])
			{
				cnt++;
			}

			j++;
		}

		if(cnt>=2)
			{
				printf("\n%d",a[i]);
				a[k] = a[i];
				k++;
			}
	}
	


	printf("\n");
	
	for(i=0;i<k;i++)
		printf("\t%d",a[i]);
	
	return 0;
}
