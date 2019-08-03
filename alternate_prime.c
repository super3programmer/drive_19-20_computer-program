


#include<stdio.h>
#include<stdlib.h>



void prime(int a[],int n)
{
	int i,*b,cnt,k,j;

	b=malloc(n*sizeof(int));

	k=0;
	for(i=0;i<n;i++)
	{
		cnt = 0;
		for(j=2;j<=a[i]/2;j++)
		{
			if((a[i]%j)==0)
			{
				cnt++;
				break;
			}
		}
		if(cnt==0)
		{
			b[k]=a[i];
			k++;
		}
	}

	printf("\nArray of prime: ");
		for(j=0;j<k;j++)
			printf("\t%d",b[j]);

	printf("\nPrime No:%d\n",k);
	for(j=0;j<k;j++)
		{
			if(j%2 == 0)
			{
				printf("\t%d",b[j]);
			}
		}
	printf("\n");
}

int main()
{
	int *a,n,i;

	printf("\nEnter number of elements: ");
	scanf("%d",&n);

	a=malloc(n * sizeof(int));
	
	printf("\nEnter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	prime(a,n);
	return 0;
}
